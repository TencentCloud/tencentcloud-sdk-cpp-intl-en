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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeRelease response structure.
                */
                class DescribeReleaseResponse : public AbstractModel
                {
                public:
                    DescribeReleaseResponse();
                    ~DescribeReleaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Publish description.
                     * @return Description Publish description.
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
                     * 获取Release status (1. pending release; 2. releasing; 3. release successful; 4. release failed; 5. releasing (under review); 6. releasing (review completed); 7. release failed; 9. release paused).
                     * @return Status Release status (1. pending release; 2. releasing; 3. release successful; 4. release failed; 5. releasing (under review); 6. releasing (review completed); 7. release failed; 9. release paused).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Release status description.
                     * @return StatusDesc Release status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                private:

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Publish description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Release status (1. pending release; 2. releasing; 3. release successful; 4. release failed; 5. releasing (under review); 6. releasing (review completed); 7. release failed; 9. release paused).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Release status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASERESPONSE_H_
