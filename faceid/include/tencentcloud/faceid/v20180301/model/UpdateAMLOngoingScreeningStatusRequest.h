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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * UpdateAMLOngoingScreeningStatus request structure.
                */
                class UpdateAMLOngoingScreeningStatusRequest : public AbstractModel
                {
                public:
                    UpdateAMLOngoingScreeningStatusRequest();
                    ~UpdateAMLOngoingScreeningStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End user's unique identifier in the customer system, up to 256 characters.
                     * @return UniqueCustomerID End user's unique identifier in the customer system, up to 256 characters.
                     * 
                     */
                    std::string GetUniqueCustomerID() const;

                    /**
                     * 设置End user's unique identifier in the customer system, up to 256 characters.
                     * @param _uniqueCustomerID End user's unique identifier in the customer system, up to 256 characters.
                     * 
                     */
                    void SetUniqueCustomerID(const std::string& _uniqueCustomerID);

                    /**
                     * 判断参数 UniqueCustomerID 是否已赋值
                     * @return UniqueCustomerID 是否已赋值
                     * 
                     */
                    bool UniqueCustomerIDHasBeenSet() const;

                    /**
                     * 获取Whether continuous monitoring screening is enabled. 
Default value: false.
                     * @return EnableOngoingScreening Whether continuous monitoring screening is enabled. 
Default value: false.
                     * 
                     */
                    bool GetEnableOngoingScreening() const;

                    /**
                     * 设置Whether continuous monitoring screening is enabled. 
Default value: false.
                     * @param _enableOngoingScreening Whether continuous monitoring screening is enabled. 
Default value: false.
                     * 
                     */
                    void SetEnableOngoingScreening(const bool& _enableOngoingScreening);

                    /**
                     * 判断参数 EnableOngoingScreening 是否已赋值
                     * @return EnableOngoingScreening 是否已赋值
                     * 
                     */
                    bool EnableOngoingScreeningHasBeenSet() const;

                private:

                    /**
                     * End user's unique identifier in the customer system, up to 256 characters.
                     */
                    std::string m_uniqueCustomerID;
                    bool m_uniqueCustomerIDHasBeenSet;

                    /**
                     * Whether continuous monitoring screening is enabled. 
Default value: false.
                     */
                    bool m_enableOngoingScreening;
                    bool m_enableOngoingScreeningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSREQUEST_H_
