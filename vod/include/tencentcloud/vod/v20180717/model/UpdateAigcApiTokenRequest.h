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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * UpdateAigcApiToken request structure.
                */
                class UpdateAigcApiTokenRequest : public AbstractModel
                {
                public:
                    UpdateAigcApiTokenRequest();
                    ~UpdateAigcApiTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>To update the Api Key</p>
                     * @return ApiToken <p>To update the Api Key</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>To update the Api Key</p>
                     * @param _apiToken <p>To update the Api Key</p>
                     * 
                     */
                    void SetApiToken(const std::string& _apiToken);

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                    /**
                     * 获取<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Merge (default, merge ExtInfo JSON by top-level key), Overwrite (direct overwrite)</p>
                     * @return ActionType <p>Merge (default, merge ExtInfo JSON by top-level key), Overwrite (direct overwrite)</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>Merge (default, merge ExtInfo JSON by top-level key), Overwrite (direct overwrite)</p>
                     * @param _actionType <p>Merge (default, merge ExtInfo JSON by top-level key), Overwrite (direct overwrite)</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>The ip allowlist and model allowlist are stored in ExtInfo in json format, with the following fields:</p><p>(1) ip allowlist<br>&quot;ip&quot;: {&quot;127.0.0.1&quot;:true}<br>Not enabled: &quot;ip&quot;: {}<br>Multiple groups: {&quot;&#39;11.12.112.90&quot;:true,&quot;15.12.112.90&quot;:true}</p><p>(2) model allowlist<br>&quot;model&quot;: {&quot;deepseek-v4-pro&quot;:true}<br>Not enabled: &quot;model&quot;: {}</p><p>(3) name<br>&quot;name&quot;: &quot;test&quot;</p>
                     * @return ExtInfo <p>The ip allowlist and model allowlist are stored in ExtInfo in json format, with the following fields:</p><p>(1) ip allowlist<br>&quot;ip&quot;: {&quot;127.0.0.1&quot;:true}<br>Not enabled: &quot;ip&quot;: {}<br>Multiple groups: {&quot;&#39;11.12.112.90&quot;:true,&quot;15.12.112.90&quot;:true}</p><p>(2) model allowlist<br>&quot;model&quot;: {&quot;deepseek-v4-pro&quot;:true}<br>Not enabled: &quot;model&quot;: {}</p><p>(3) name<br>&quot;name&quot;: &quot;test&quot;</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>The ip allowlist and model allowlist are stored in ExtInfo in json format, with the following fields:</p><p>(1) ip allowlist<br>&quot;ip&quot;: {&quot;127.0.0.1&quot;:true}<br>Not enabled: &quot;ip&quot;: {}<br>Multiple groups: {&quot;&#39;11.12.112.90&quot;:true,&quot;15.12.112.90&quot;:true}</p><p>(2) model allowlist<br>&quot;model&quot;: {&quot;deepseek-v4-pro&quot;:true}<br>Not enabled: &quot;model&quot;: {}</p><p>(3) name<br>&quot;name&quot;: &quot;test&quot;</p>
                     * @param _extInfo <p>The ip allowlist and model allowlist are stored in ExtInfo in json format, with the following fields:</p><p>(1) ip allowlist<br>&quot;ip&quot;: {&quot;127.0.0.1&quot;:true}<br>Not enabled: &quot;ip&quot;: {}<br>Multiple groups: {&quot;&#39;11.12.112.90&quot;:true,&quot;15.12.112.90&quot;:true}</p><p>(2) model allowlist<br>&quot;model&quot;: {&quot;deepseek-v4-pro&quot;:true}<br>Not enabled: &quot;model&quot;: {}</p><p>(3) name<br>&quot;name&quot;: &quot;test&quot;</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>To update the Api Key</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                    /**
                     * <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Merge (default, merge ExtInfo JSON by top-level key), Overwrite (direct overwrite)</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>The ip allowlist and model allowlist are stored in ExtInfo in json format, with the following fields:</p><p>(1) ip allowlist<br>&quot;ip&quot;: {&quot;127.0.0.1&quot;:true}<br>Not enabled: &quot;ip&quot;: {}<br>Multiple groups: {&quot;&#39;11.12.112.90&quot;:true,&quot;15.12.112.90&quot;:true}</p><p>(2) model allowlist<br>&quot;model&quot;: {&quot;deepseek-v4-pro&quot;:true}<br>Not enabled: &quot;model&quot;: {}</p><p>(3) name<br>&quot;name&quot;: &quot;test&quot;</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_
