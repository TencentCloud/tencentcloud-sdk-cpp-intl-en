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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSRESPONSE_H_

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
                * UpdateAMLOngoingScreeningStatus response structure.
                */
                class UpdateAMLOngoingScreeningStatusResponse : public AbstractModel
                {
                public:
                    UpdateAMLOngoingScreeningStatusResponse();
                    ~UpdateAMLOngoingScreeningStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifier of the end user in the customer system</p>
                     * @return UniqueCustomerID <p>Unique identifier of the end user in the customer system</p>
                     * 
                     */
                    std::string GetUniqueCustomerID() const;

                    /**
                     * 判断参数 UniqueCustomerID 是否已赋值
                     * @return UniqueCustomerID 是否已赋值
                     * 
                     */
                    bool UniqueCustomerIDHasBeenSet() const;

                    /**
                     * 获取<p>Whether continuous monitoring screening is enabled</p>
                     * @return EnableOngoingScreening <p>Whether continuous monitoring screening is enabled</p>
                     * 
                     */
                    bool GetEnableOngoingScreening() const;

                    /**
                     * 判断参数 EnableOngoingScreening 是否已赋值
                     * @return EnableOngoingScreening 是否已赋值
                     * 
                     */
                    bool EnableOngoingScreeningHasBeenSet() const;

                    /**
                     * 获取<p>Return result description</p>
                     * @return Description <p>Return result description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Returned results</p>
                     * @return Result <p>Returned results</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier of the end user in the customer system</p>
                     */
                    std::string m_uniqueCustomerID;
                    bool m_uniqueCustomerIDHasBeenSet;

                    /**
                     * <p>Whether continuous monitoring screening is enabled</p>
                     */
                    bool m_enableOngoingScreening;
                    bool m_enableOngoingScreeningHasBeenSet;

                    /**
                     * <p>Return result description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Returned results</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLONGOINGSCREENINGSTATUSRESPONSE_H_
