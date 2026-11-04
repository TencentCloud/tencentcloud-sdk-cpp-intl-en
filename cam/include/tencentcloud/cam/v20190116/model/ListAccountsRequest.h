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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAccounts request structure.
                */
                class ListAccountsRequest : public AbstractModel
                {
                public:
                    ListAccountsRequest();
                    ~ListAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of returned results. If the returned results are truncated after reaching the MaxItems limit, the response parameter IsTruncated will be equal to true.</p><p>Value range: [1, 100]</p>
                     * @return MaxItems <p>Number of returned results. If the returned results are truncated after reaching the MaxItems limit, the response parameter IsTruncated will be equal to true.</p><p>Value range: [1, 100]</p>
                     * 
                     */
                    int64_t GetMaxItems() const;

                    /**
                     * 设置<p>Number of returned results. If the returned results are truncated after reaching the MaxItems limit, the response parameter IsTruncated will be equal to true.</p><p>Value range: [1, 100]</p>
                     * @param _maxItems <p>Number of returned results. If the returned results are truncated after reaching the MaxItems limit, the response parameter IsTruncated will be equal to true.</p><p>Value range: [1, 100]</p>
                     * 
                     */
                    void SetMaxItems(const int64_t& _maxItems);

                    /**
                     * 判断参数 MaxItems 是否已赋值
                     * @return MaxItems 是否已赋值
                     * 
                     */
                    bool MaxItemsHasBeenSet() const;

                    /**
                     * 获取<p>When the return result of the request is truncated, you can use Marker to get the content after the current truncation position.</p>
                     * @return Marker <p>When the return result of the request is truncated, you can use Marker to get the content after the current truncation position.</p>
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置<p>When the return result of the request is truncated, you can use Marker to get the content after the current truncation position.</p>
                     * @param _marker <p>When the return result of the request is truncated, you can use Marker to get the content after the current truncation position.</p>
                     * 
                     */
                    void SetMarker(const std::string& _marker);

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取<p>Type of user</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: ordinary sub-user</li><li>CICUser: CIC sub-user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity sub-user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li></ul>
                     * @return UserType <p>Type of user</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: ordinary sub-user</li><li>CICUser: CIC sub-user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity sub-user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li></ul>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>Type of user</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: ordinary sub-user</li><li>CICUser: CIC sub-user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity sub-user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li></ul>
                     * @param _userType <p>Type of user</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: ordinary sub-user</li><li>CICUser: CIC sub-user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity sub-user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li></ul>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Number of returned results. If the returned results are truncated after reaching the MaxItems limit, the response parameter IsTruncated will be equal to true.</p><p>Value range: [1, 100]</p>
                     */
                    int64_t m_maxItems;
                    bool m_maxItemsHasBeenSet;

                    /**
                     * <p>When the return result of the request is truncated, you can use Marker to get the content after the current truncation position.</p>
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * <p>Type of user</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: ordinary sub-user</li><li>CICUser: CIC sub-user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity sub-user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li></ul>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_
