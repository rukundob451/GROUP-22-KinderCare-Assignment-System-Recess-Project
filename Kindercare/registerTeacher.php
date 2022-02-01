<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">
    <link rel="icon" href="/docs/4.0/assets/img/favicons/favicon.ico">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js"></script>

    <title>Register here</title>

    <link rel="canonical" href="https://getbootstrap.com/docs/4.0/examples/sign-in/">

    <!-- Bootstrap core CSS -->
    <link href="../../dist/css/bootstrap.min.css" rel="stylesheet">

    <!-- Custom styles for this template -->
    <link href="signin.css" rel="stylesheet">
    <style>
      html,
body {
  height: 100%;
}

body {
  display: -ms-flexbox;
  display: -webkit-box;
  display: flex;
  -ms-flex-align: center;
  -ms-flex-pack: center;
  -webkit-box-align: center;
  align-items: center;
  -webkit-box-pack: center;
  justify-content: center;
  padding-top: 40px;
  padding-bottom: 40px;
  background-color: #f5f5f5;
}

.form-signin {
  width: 100%;
  max-width: 330px;
  padding: 15px;
  margin: 0 auto;
}
.form-signin .checkbox {
  font-weight: 400;
}
.form-signin .form-control {
  position: relative;
  box-sizing: border-box;
  height: auto;
  padding: 10px;
  font-size: 16px;
}
.form-signin .form-control:focus {
  z-index: 2;
}
.form-signin input[type="text"] {
  margin-bottom: -1px;
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}
.form-signin input[type="password"] {
  margin-bottom: 10px;
  border-top-left-radius: 0;
  border-top-right-radius: 0;
}
</style>
  </head>

  <body class="text-center">
    <form class="form-signin" method="post" action="">
    
      <img class="mb-4" src="logo.png" alt="Logo" width="150" height="150">
      <h1 class="h5 mb-3 font-weight-normal">Please Enter the following details.</h1>
      <label for="inputEmail"  class="sr-only">Email</label>
      <input type="text" name="emailAddress"  class="form-control" placeholder="Enter Email Address" required autofocus>
      <label for="inputTeacherNo" class="sr-only">Teacher Number</label>
      <input type="text" name="teacherNumber" class="form-control" placeholder="Enter Teacher Number" required autofocus>
      <label for="inputFirstName" class="sr-only">First Name</label>
      <input type="text" name="firstName" class="form-control" placeholder="Enter First Name" required>
      <label for="inputLastName" class="sr-only">Last Name</label>
      <input type="text" name="lastName" class="form-control" placeholder="Enter Last Name" required>
      <label for="inputPassword" class="sr-only">Password</label>
      <input type="password" name="password" class="form-control" placeholder="Password" required>
      <div class="checkbox mb-3">
        <label>
        <p >Already have an account?
        <a href="/"><span style ="color:#151f28">Sign In here</span></a></p>
        </label>
      </div>
      <button class="btn btn-lg btn-primary btn-block" name="save" type="submit">Register Here</button>
      <p class="mt-4 mb-3 text-muted">&copy; 2022</p>
    </form>
  </body>
</html>