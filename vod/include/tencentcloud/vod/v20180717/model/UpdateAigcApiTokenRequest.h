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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, to access resources in on-demand applications (whether it is the default application or a newly created application), you must fill in this field with the application ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, to access resources in on-demand applications (whether it is the default application or a newly created application), you must fill in this field with the application ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, to access resources in on-demand applications (whether it is the default application or a newly created application), you must fill in this field with the application ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, to access resources in on-demand applications (whether it is the default application or a newly created application), you must fill in this field with the application ID.</b></p>
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
                     * 获取<p>To refresh the Api Key</p>
                     * @return ApiToken <p>To refresh the Api Key</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>To refresh the Api Key</p>
                     * @param _apiToken <p>To refresh the Api Key</p>
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
                     * 获取<p>Merge (default, merges ExtInfo JSON by top-level key), Overwrite (directly overwrite)</p>
                     * @return ActionType <p>Merge (default, merges ExtInfo JSON by top-level key), Overwrite (directly overwrite)</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>Merge (default, merges ExtInfo JSON by top-level key), Overwrite (directly overwrite)</p>
                     * @param _actionType <p>Merge (default, merges ExtInfo JSON by top-level key), Overwrite (directly overwrite)</p>
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
                     * 获取<p>Extended information of the token</p>
                     * @return ExtInfo <p>Extended information of the token</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Extended information of the token</p>
                     * @param _extInfo <p>Extended information of the token</p>
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
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, to access resources in on-demand applications (whether it is the default application or a newly created application), you must fill in this field with the application ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>To refresh the Api Key</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                    /**
                     * <p>Merge (default, merges ExtInfo JSON by top-level key), Overwrite (directly overwrite)</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>Extended information of the token</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_
