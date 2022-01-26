/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * GetServiceStatus response structure.
                */
                class GetServiceStatusResponse : public AbstractModel
                {
                public:
                    GetServiceStatusResponse();
                    ~GetServiceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the KMS service has been activated. true: activated
                     * @return ServiceEnabled Whether the KMS service has been activated. true: activated
                     */
                    bool GetServiceEnabled() const;

                    /**
                     * 判断参数 ServiceEnabled 是否已赋值
                     * @return ServiceEnabled 是否已赋值
                     */
                    bool ServiceEnabledHasBeenSet() const;

                    /**
                     * 获取Service unavailability type. 0: not purchased; 1: normal; 2: suspended due to arrears; 3: resource released
                     * @return InvalidType Service unavailability type. 0: not purchased; 1: normal; 2: suspended due to arrears; 3: resource released
                     */
                    int64_t GetInvalidType() const;

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取0: Basic Edition, 1: Ultimate Edition
                     * @return UserLevel 0: Basic Edition, 1: Ultimate Edition
                     */
                    uint64_t GetUserLevel() const;

                    /**
                     * 判断参数 UserLevel 是否已赋值
                     * @return UserLevel 是否已赋值
                     */
                    bool UserLevelHasBeenSet() const;

                    /**
                     * 获取Ultimate Edition expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProExpireTime Ultimate Edition expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetProExpireTime() const;

                    /**
                     * 判断参数 ProExpireTime 是否已赋值
                     * @return ProExpireTime 是否已赋值
                     */
                    bool ProExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically renew Ultimate Edition. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProRenewFlag Whether to automatically renew Ultimate Edition. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetProRenewFlag() const;

                    /**
                     * 判断参数 ProRenewFlag 是否已赋值
                     * @return ProRenewFlag 是否已赋值
                     */
                    bool ProRenewFlagHasBeenSet() const;

                    /**
                     * 获取Unique ID of the Ultimate Edition purchase record. If the Ultimate Edition is not activated, the returned value will be null.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProResourceId Unique ID of the Ultimate Edition purchase record. If the Ultimate Edition is not activated, the returned value will be null.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProResourceId() const;

                    /**
                     * 判断参数 ProResourceId 是否已赋值
                     * @return ProResourceId 是否已赋值
                     */
                    bool ProResourceIdHasBeenSet() const;

                private:

                    /**
                     * Whether the KMS service has been activated. true: activated
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * Service unavailability type. 0: not purchased; 1: normal; 2: suspended due to arrears; 3: resource released
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * 0: Basic Edition, 1: Ultimate Edition
                     */
                    uint64_t m_userLevel;
                    bool m_userLevelHasBeenSet;

                    /**
                     * Ultimate Edition expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_proExpireTime;
                    bool m_proExpireTimeHasBeenSet;

                    /**
                     * Whether to automatically renew Ultimate Edition. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_proRenewFlag;
                    bool m_proRenewFlagHasBeenSet;

                    /**
                     * Unique ID of the Ultimate Edition purchase record. If the Ultimate Edition is not activated, the returned value will be null.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proResourceId;
                    bool m_proResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
