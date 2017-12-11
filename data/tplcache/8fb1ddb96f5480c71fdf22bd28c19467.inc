<li class="nav_li"><a href="{dede:field name='typeurl'/}" class="menu" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a>
        <ul class="sub_nav">
          {dede:channel type='son' noself='yes'}
          <li><a href="[field:typelink/]" target="_self">[field:typename/]</a></li>
          {/dede:channel}
        </ul>
      </li>