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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CopyAgentFromApp request structure.
                */
                class CopyAgentFromAppRequest : public AbstractModel
                {
                public:
                    CopyAgentFromAppRequest();
                    ~CopyAgentFromAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Target application ID. Required when kind=0</p>
                     * @return TargetAppId <p>Target application ID. Required when kind=0</p>
                     * 
                     */
                    std::string GetTargetAppId() const;

                    /**
                     * 设置<p>Target application ID. Required when kind=0</p>
                     * @param _targetAppId <p>Target application ID. Required when kind=0</p>
                     * 
                     */
                    void SetTargetAppId(const std::string& _targetAppId);

                    /**
                     * 判断参数 TargetAppId 是否已赋值
                     * @return TargetAppId 是否已赋值
                     * 
                     */
                    bool TargetAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent type, case-sensitive between B-end configuration Agent and C-end client user Agent</p><p>Enumeration values:</p><ul><li>0: Configuration end Agent</li><li>1: User space Agent</li></ul>
                     * @return Kind <p>Agent type, case-sensitive between B-end configuration Agent and C-end client user Agent</p><p>Enumeration values:</p><ul><li>0: Configuration end Agent</li><li>1: User space Agent</li></ul>
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置<p>Agent type, case-sensitive between B-end configuration Agent and C-end client user Agent</p><p>Enumeration values:</p><ul><li>0: Configuration end Agent</li><li>1: User space Agent</li></ul>
                     * @param _kind <p>Agent type, case-sensitive between B-end configuration Agent and C-end client user Agent</p><p>Enumeration values:</p><ul><li>0: Configuration end Agent</li><li>1: User space Agent</li></ul>
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Target application ID. Required when kind=0</p>
                     */
                    std::string m_targetAppId;
                    bool m_targetAppIdHasBeenSet;

                    /**
                     * <p>Agent type, case-sensitive between B-end configuration Agent and C-end client user Agent</p><p>Enumeration values:</p><ul><li>0: Configuration end Agent</li><li>1: User space Agent</li></ul>
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_
