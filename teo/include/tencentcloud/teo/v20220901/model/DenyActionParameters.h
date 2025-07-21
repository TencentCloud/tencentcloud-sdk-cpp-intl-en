/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Safe execution action specifies additional parameters for the ban.
                */
                class DenyActionParameters : public AbstractModel
                {
                public:
                    DenyActionParameters();
                    ~DenyActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to extend the ban on the source IP. valid values.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

After enabled, continuously blocks client ips that trigger the rule. when this option is enabled, the BlockIpDuration parameter must be simultaneously designated.
Note: this option cannot intersect with ReturnCustomPage or Stall.
                     * @return BlockIp Specifies whether to extend the ban on the source IP. valid values.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

After enabled, continuously blocks client ips that trigger the rule. when this option is enabled, the BlockIpDuration parameter must be simultaneously designated.
Note: this option cannot intersect with ReturnCustomPage or Stall.
                     * 
                     */
                    std::string GetBlockIp() const;

                    /**
                     * 设置Specifies whether to extend the ban on the source IP. valid values.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

After enabled, continuously blocks client ips that trigger the rule. when this option is enabled, the BlockIpDuration parameter must be simultaneously designated.
Note: this option cannot intersect with ReturnCustomPage or Stall.
                     * @param _blockIp Specifies whether to extend the ban on the source IP. valid values.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

After enabled, continuously blocks client ips that trigger the rule. when this option is enabled, the BlockIpDuration parameter must be simultaneously designated.
Note: this option cannot intersect with ReturnCustomPage or Stall.
                     * 
                     */
                    void SetBlockIp(const std::string& _blockIp);

                    /**
                     * 判断参数 BlockIp 是否已赋值
                     * @return BlockIp 是否已赋值
                     * 
                     */
                    bool BlockIpHasBeenSet() const;

                    /**
                     * 获取The ban duration when BlockIP is on.
                     * @return BlockIpDuration The ban duration when BlockIP is on.
                     * 
                     */
                    std::string GetBlockIpDuration() const;

                    /**
                     * 设置The ban duration when BlockIP is on.
                     * @param _blockIpDuration The ban duration when BlockIP is on.
                     * 
                     */
                    void SetBlockIpDuration(const std::string& _blockIpDuration);

                    /**
                     * 判断参数 BlockIpDuration 是否已赋值
                     * @return BlockIpDuration 是否已赋值
                     * 
                     */
                    bool BlockIpDurationHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use a custom page. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, use custom page content to intercept requests. when this option is enabled, ResponseCode and ErrorPageId parameters must be specified simultaneously.
Note: this option cannot intersect with the BlockIp or Stall option.

                     * @return ReturnCustomPage Specifies whether to use a custom page. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, use custom page content to intercept requests. when this option is enabled, ResponseCode and ErrorPageId parameters must be specified simultaneously.
Note: this option cannot intersect with the BlockIp or Stall option.

                     * 
                     */
                    std::string GetReturnCustomPage() const;

                    /**
                     * 设置Specifies whether to use a custom page. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, use custom page content to intercept requests. when this option is enabled, ResponseCode and ErrorPageId parameters must be specified simultaneously.
Note: this option cannot intersect with the BlockIp or Stall option.

                     * @param _returnCustomPage Specifies whether to use a custom page. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, use custom page content to intercept requests. when this option is enabled, ResponseCode and ErrorPageId parameters must be specified simultaneously.
Note: this option cannot intersect with the BlockIp or Stall option.

                     * 
                     */
                    void SetReturnCustomPage(const std::string& _returnCustomPage);

                    /**
                     * 判断参数 ReturnCustomPage 是否已赋值
                     * @return ReturnCustomPage 是否已赋值
                     * 
                     */
                    bool ReturnCustomPageHasBeenSet() const;

                    /**
                     * 获取Status code of the custom page.
                     * @return ResponseCode Status code of the custom page.
                     * 
                     */
                    std::string GetResponseCode() const;

                    /**
                     * 设置Status code of the custom page.
                     * @param _responseCode Status code of the custom page.
                     * 
                     */
                    void SetResponseCode(const std::string& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取Specifies the page id of the custom page.
                     * @return ErrorPageId Specifies the page id of the custom page.
                     * 
                     */
                    std::string GetErrorPageId() const;

                    /**
                     * 设置Specifies the page id of the custom page.
                     * @param _errorPageId Specifies the page id of the custom page.
                     * 
                     */
                    void SetErrorPageId(const std::string& _errorPageId);

                    /**
                     * 判断参数 ErrorPageId 是否已赋值
                     * @return ErrorPageId 是否已赋值
                     * 
                     */
                    bool ErrorPageIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to suspend the request source without processing. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, no longer responds to requests in the current connection session and does not actively disconnect. used for crawler combat to consume client connection resources.
Note: this option cannot intersect with BlockIp or ReturnCustomPage options.
                     * @return Stall Specifies whether to suspend the request source without processing. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, no longer responds to requests in the current connection session and does not actively disconnect. used for crawler combat to consume client connection resources.
Note: this option cannot intersect with BlockIp or ReturnCustomPage options.
                     * 
                     */
                    std::string GetStall() const;

                    /**
                     * 设置Specifies whether to suspend the request source without processing. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, no longer responds to requests in the current connection session and does not actively disconnect. used for crawler combat to consume client connection resources.
Note: this option cannot intersect with BlockIp or ReturnCustomPage options.
                     * @param _stall Specifies whether to suspend the request source without processing. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, no longer responds to requests in the current connection session and does not actively disconnect. used for crawler combat to consume client connection resources.
Note: this option cannot intersect with BlockIp or ReturnCustomPage options.
                     * 
                     */
                    void SetStall(const std::string& _stall);

                    /**
                     * 判断参数 Stall 是否已赋值
                     * @return Stall 是否已赋值
                     * 
                     */
                    bool StallHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to extend the ban on the source IP. valid values.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

After enabled, continuously blocks client ips that trigger the rule. when this option is enabled, the BlockIpDuration parameter must be simultaneously designated.
Note: this option cannot intersect with ReturnCustomPage or Stall.
                     */
                    std::string m_blockIp;
                    bool m_blockIpHasBeenSet;

                    /**
                     * The ban duration when BlockIP is on.
                     */
                    std::string m_blockIpDuration;
                    bool m_blockIpDurationHasBeenSet;

                    /**
                     * Specifies whether to use a custom page. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, use custom page content to intercept requests. when this option is enabled, ResponseCode and ErrorPageId parameters must be specified simultaneously.
Note: this option cannot intersect with the BlockIp or Stall option.

                     */
                    std::string m_returnCustomPage;
                    bool m_returnCustomPageHasBeenSet;

                    /**
                     * Status code of the custom page.
                     */
                    std::string m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * Specifies the page id of the custom page.
                     */
                    std::string m_errorPageId;
                    bool m_errorPageIdHasBeenSet;

                    /**
                     * Specifies whether to suspend the request source without processing. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>

Enabled, no longer responds to requests in the current connection session and does not actively disconnect. used for crawler combat to consume client connection resources.
Note: this option cannot intersect with BlockIp or ReturnCustomPage options.
                     */
                    std::string m_stall;
                    bool m_stallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_
