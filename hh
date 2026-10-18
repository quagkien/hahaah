<!DOCTYPE html>
<html lang="vi">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Chúc mừng ngày 20/10 - Hoa hồng</title>
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Playfair+Display:wght@600;700&family=Noto+Sans:wght@400;700&display=swap" rel="stylesheet">
  <style>
    :root{
      --rose-deep: #8b1638;
      --rose-pink: #ff7aa2;
      --rose-rose: #c62855;
      --gold: #ffb74d;
      --card-bg: rgba(255, 250, 248, 0.96);
      --leaf: #2f7a43;
    }
    *{box-sizing:border-box; user-select: none;}
    html,body{height:100%}
    body{
      margin:0;
      font-family:"Noto Sans", system-ui, -apple-system, "Segoe UI", Roboto, "Helvetica Neue", Arial;
      color:var(--rose-deep);
      display:flex;
      align-items:center;
      justify-content:center;
      padding:24px;
      overflow:hidden;
      background:
        radial-gradient(1200px 600px at 10% 10%, rgba(255,235,240,0.85), transparent 15%),
        radial-gradient(1000px 500px at 90% 90%, rgba(255,245,240,0.85), transparent 20%),
        linear-gradient(180deg, #fff0f3 0%, #ffe7ee 40%, #fff6f8 100%),
        url("data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' width='120' height='120' viewBox='0 0 24 24'><g fill='none' stroke='%23c62855' stroke-width='0.9' stroke-linecap='round' stroke-linejoin='round'><path d='M12 3c1.1 0 2 .9 2 2 0 1.86-1.56 3.37-3.5 3.37S7 6.86 7 5c0-1.1.9-2 2-2'/><path d='M12 6c2.5 0 4.5 2 4.5 4.5S14.5 15 12 15 7.5 12 7.5 9.5 9.5 6 12 6z'/><path d='M6 17c0-3 4-4 6-4s6 1 6 4a4 4 0 0 1-4 4H10a4 4 0 0 1-4-4z'/></g></svg>");
      background-repeat: repeat;
      background-size: 420px 420px, 420px 420px, cover, 120px 120px;
    }
    #petals {
      position:fixed;
      left:0;top:0;
      width:100%;
      height:100%;
      z-index:0;
      pointer-events:none;
    }
    .scene {
      position:relative;
      z-index:2;
      width: min(92%, 820px);
    }
    .card {
      background: var(--card-bg);
      padding:36px 36px 28px;
      border-radius:22px;
      border: 6px solid rgba(255,238,235,0.6);
      box-shadow: 0 18px 40px rgba(182,49,102,0.12), 0 6px 18px rgba(0,0,0,0.06);
      text-align:center;
      position:relative;
      overflow:visible;
    }
    .garland {
      position:absolute;
      left:50%;
      transform:translateX(-50%);
      top:-36px;
      background: linear-gradient(90deg, rgba(255,245,240,0.95), rgba(255,238,230,0.95));
      padding:10px 22px;
      border-radius:999px;
      box-shadow:0 8px 18px rgba(198,80,120,0.08);
      font-weight:700;
      color:var(--rose-deep);
      display:flex;
      gap:14px;
      align-items:center;
      z-index:3;
      letter-spacing:0.6px;
    }
    .garland .roses{ font-size:20px; transform-origin:center; animation: garland-sway 5s ease-in-out infinite; }
    @keyframes garland-sway { 0%,100%{ transform:translateY(0) rotate(-3deg) } 50%{ transform:translateY(3px) rotate(3deg) } }
    .flower {
      font-size:64px;
      display:inline-block;
      transform-origin:center;
      animation: sway 2.6s ease-in-out infinite, pop 1.2s ease-out 0.06s;
      filter: drop-shadow(0 8px 18px rgba(198,70,120,0.08));
    }
    @keyframes sway {
      0%,100%{ transform: rotate(-6deg) }
      50%{ transform: rotate(6deg) }
    }
    @keyframes pop {
      0%{ transform: scale(.96) }
      70%{ transform: scale(1.02) }
      100%{ transform: scale(1) }
    }
    h1{
      margin:14px 0 6px;
      color:var(--rose-rose);
      font-family:"Playfair Display";
      font-size: clamp(2rem, 6.4vw, 3.4rem);
      text-shadow: 0 6px 20px rgba(198,80,120,0.06);
      position:relative;
    }
    h1::after{
      content:"";
      position:absolute;
      left:-10%;
      top:10%;
      height:40%;
      width:30%;
      background: linear-gradient(120deg, rgba(255,255,255,0.0), rgba(255,255,255,0.6), rgba(255,255,255,0.0));
      transform:skewX(-20deg);
      filter: blur(10px);
      animation: shimmer 3.5s linear infinite;
      pointer-events:none;
    }
    @keyframes shimmer{ 0%{ left:-30% } 100%{ left:130% } }
    .message{
      margin: 14px auto;
      max-width:620px;
      font-size:1.08rem;
      line-height:1.8;
      color:var(--rose-deep);
    }
    .wish{
      margin-top:18px;
      color:var(--gold);
      font-size:1.05rem;
      font-weight:700;
      letter-spacing:0.2px;
    }
    .hearts{
      margin-top:18px;
      font-size:28px;
      letter-spacing:8px;
    }
    .controls{
      margin-top:18px;
      display:flex;
      justify-content:center;
      gap:10px;
      flex-wrap: wrap;
    }
    .btn{
      background: linear-gradient(90deg,#ff8fa1,#ffb46a);
      border: none;
      padding:10px 18px;
      border-radius:999px;
      cursor:pointer;
      color:white;
      font-weight:700;
      box-shadow:0 8px 20px rgba(198,80,120,0.12);
      transition: transform 0.2s ease, box-shadow 0.2s ease;
    }
    .btn:hover {
      transform: translateY(-2px);
      box-shadow:0 12px 24px rgba(198,80,120,0.18);
    }
    .btn:active { transform: translateY(0); }
    .border-deco{
      margin-top:18px;
      display:flex;
      justify-content:center;
      gap:8px;
      align-items:center;
      color:#b65f2f;
      opacity:0.95;
      font-size:18px;
    }
    @media (max-width:480px){
      body { padding: 16px; }
      .card{ padding:24px 18px }
      .flower{ font-size:48px }
      .garland { font-size: 0.9rem; padding: 8px 16px; top: -28px; }
    }
  </style>
</head>
<body>
  <canvas id="petals"></canvas>
  <main class="scene">
    <section class="card" role="main" aria-label="Thiệp chúc mừng ngày Phụ nữ Việt Nam 20/10">
      <div class="garland" aria-hidden="true">
        <div class="roses">🌹🌹🌹</div>
        Chúc mừng 20/10
        <div style="width:6px"></div>
      </div>
      <div style="height:8px"></div>
      <div class="flower" aria-hidden="true">🌹</div>
      <h1>Chúc mừng ngày 20/10!</h1>
      <p class="message">
        Gửi đến tất cả những người phụ nữ tuyệt vời:<br>
        chúc các bạn luôn xinh đẹp, vui vẻ, tự tin và hạnh phúc.<br>
        Mong rằng mỗi ngày của các bạn đều ngập tràn yêu thương,<br>
        tiếng cười và những điều thật dịu dàng.
      </p>
      <p class="wish">
        Chúc tất cả các bạn nữ luôn tỏa sáng theo cách riêng của mình! 💖
      </p>
      <div class="hearts" aria-hidden="true">💐 &nbsp;💕 &nbsp;🌸</div>
      <div class="controls" aria-hidden="true">
        <button id="petalsBtn" class="btn">Tắt pháo hoa hồng</button>
        <button id="burstBtn" class="btn">Bắn pháo hoa hồng</button>
      </div>
      <div class="border-deco" aria-hidden="true">✨ 🌺 ✨</div>
    </section>
  </main>
  <script>
    (function(){
      const canvas = document.getElementById('petals');
      const ctx = canvas.getContext('2d');
      let w = canvas.width = innerWidth;
      let h = canvas.height = innerHeight;
      let fireworks = [];
      let particles = [];
      let fireworksOn = true;
      
      // Bảng màu pháo hoa - tông hoa hồng
      const roseColors = ['#ffd1dc','#ff9fb3','#ff6680','#ff7aa2','#c62855','#ffb74d','#ff8fa1'];
      
      function rand(min,max){ return Math.random()*(max-min)+min }
      
      // Tạo hạt pháo hoa hình cánh hoa hồng
      function makeParticle(x,y,color){
        return {
          x: x,
          y: y,
          vx: rand(-5,5),
          vy: rand(-5,5),
          size: rand(6,16),
          rot: rand(0,Math.PI*2),
          vr: rand(-0.08,0.08),
          color: color,
          life: 0,
          ttl: Math.floor(rand(60,140)),
          gravity: 0.06,
          drag: 0.98
        };
      }
      
      // Tạo pháo hoa bùng nổ
      function createFirework(startX, startY, targetY){
        const color = roseColors[Math.floor(Math.random()*roseColors.length)];
        return {
          x: startX,
          y: h,
          targetY: targetY,
          vy: -rand(6,10),
          vx: rand(-0.8,0.8),
          color: color,
          size: 4,
          exploded: false,
          trail: []
        };
      }
      
      // Vẽ cánh hoa hồng
      function drawRosePetal(p){
        ctx.save();
        ctx.translate(p.x, p.y);
        ctx.rotate(p.rot);
        ctx.fillStyle = p.color;
        ctx.beginPath();
        ctx.moveTo(0, -p.size/2);
        ctx.bezierCurveTo(p.size/2, -p.size/2, p.size/2, p.size/3, 0, p.size/1.5);
        ctx.bezierCurveTo(-p.size/2, p.size/3, -p.size/2, -p.size/2, 0, -p.size/2);
        ctx.fill();
        ctx.restore();
      }
      
      // Bùng nổ thành hình hoa hồng
      function explodeFirework(fw){
        const petalCount = Math.floor(rand(12, 24));
        const petalColor = fw.color;
        
        // Tạo các cánh hoa tỏa ra thành hình hoa
        for(let i=0; i < petalCount; i++){
          const angle = (i / petalCount) * Math.PI * 2;
          const speed = rand(2.5, 5);
          const p = makeParticle(fw.x, fw.y, petalColor);
          p.vx = Math.cos(angle) * speed;
          p.vy = Math.sin(angle) * speed;
          particles.push(p);
        }
        
        // Thêm các hạt nhỏ rơi ra
        for(let i=0; i < 8; i++){
          const p = makeParticle(fw.x, fw.y, roseColors[Math.floor(Math.random()*roseColors.length)]);
          p.vx = rand(-2,2);
          p.vy = rand(-3,1);
          p.size = rand(4,8);
          particles.push(p);
        }
      }
      
      function loop(){
        ctx.clearRect(0,0,w,h);
        
        if(fireworksOn && Math.random() < 0.04){
          const fw = createFirework(
            rand(w*0.1, w*0.9),
            h,
            rand(h*0.15, h*0.5)
          );
          fireworks.push(fw);
        }
        
        // Cập nhật pháo hoa bay lên
        for(let i = fireworks.length - 1; i >= 0; i--){
          const fw = fireworks[i];
          
          fw.trail.push({x: fw.x, y: fw.y});
          if(fw.trail.length > 15) fw.trail.shift();
          
          // Vẽ vệt sáng
          if(fw.trail.length > 1){
            ctx.beginPath();
            ctx.moveTo(fw.trail[0].x, fw.trail[0].y);
            for(let j = 1; j < fw.trail.length; j++){
              ctx.lineTo(fw.trail[j].x, fw.trail[j].y);
            }
            ctx.strokeStyle = fw.color;
            ctx.lineWidth = 2;
            ctx.globalAlpha = 0.5;
            ctx.stroke();
            ctx.globalAlpha = 1;
          }
          
          fw.x += fw.vx;
          fw.y += fw.vy;
          fw.vy += 0.12;
          
          if(fw.y <= fw.targetY || fw.vy >= 0){
            explodeFirework(fw);
            fireworks.splice(i, 1);
          }
        }
        
        // Cập nhật các hạt cánh hoa
        for(let i = particles.length - 1; i >= 0; i--){
          const p = particles[i];
          p.life++;
          
          p.vx *= p.drag;
          p.vy *= p.drag;
          p.vy += p.gravity;
          p.x += p.vx;
          p.y += p.vy;
          p.rot += p.vr;
          
          const alpha = 1 - (p.life / p.ttl);
          ctx.globalAlpha = Math.max(0, alpha);
          drawRosePetal(p);
          ctx.globalAlpha = 1;
          
          if(p.life > p.ttl || p.y > h + 50){
            particles.splice(i, 1);
          }
        }
        
        requestAnimationFrame(loop);
      }
      
      addEventListener('resize', ()=>{
        w = canvas.width = innerWidth;
        h = canvas.height = innerHeight;
      });
      
      // Nút bật/tắt pháo hoa
      document.getElementById('petalsBtn').addEventListener('click', ()=>{
        fireworksOn = !fireworksOn;
        document.getElementById('petalsBtn').textContent = fireworksOn ? 'Tắt pháo hoa hồng' : 'Bật pháo hoa hồng';
      });
      
      // Nút bắn pháo hoa thủ công
      document.getElementById('burstBtn').addEventListener('click', ()=>{
        const fw = createFirework(
          innerWidth * (0.2 + Math.random()*0.6),
          h,
          innerHeight * (0.1 + Math.random()*0.4)
        );
        fireworks.push(fw);
      });
      
      // Nhấp chuột = bắn pháo hoa ngay vị trí
      document.addEventListener('click', (e)=>{
        const fw = {
          x: e.clientX,
          y: e.clientY,
          exploded: false,
          color: roseColors[Math.floor(Math.random()*roseColors.length)]
        };
        explodeFirework(fw);
      });
      
      // Phím tắt
      document.addEventListener('keydown', (e)=>{
        if(e.key === 'b' || e.key === 'B'){ 
          document.getElementById('burstBtn').click(); 
        }
        if(e.key === 'p' || e.key === 'P'){ 
          document.getElementById('petalsBtn').click(); 
        }
      });
      
      // Bắn pháo hoa lúc mở trang
      setTimeout(()=> {
        for(let i=0; i<5; i++){
          setTimeout(()=>{
            const fw = createFirework(
              rand(w*0.15, w*0.85),
              h,
              rand(h*0.15, h*0.45)
            );
            fireworks.push(fw);
          }, i * 350);
        }
      }, 500);
      
      loop();
    })();
  </script>
</body>
</html>
