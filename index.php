<?php
require('config.php');
?>
<form action="submit.php" method="post">
	<script
		src="https://checkout.stripe.com/checkout.js" class="stripe-button"
		data-key="<?php echo $publishableKey?>"
		data-amount="1000"
		data-name="Programming with Vishal"
		data-description="Programming with Vishal Desc"
		data-image="https://www.logostack.com/wp-content/uploads/designers/eclipse42/small-panda-01-600x420.jpg"
		data-currency="inr"
		data-email="phpvishal@gmail.com"
	>
	</script>

</form>