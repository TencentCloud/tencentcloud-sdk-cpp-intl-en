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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEALLOCATIONTAGREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEALLOCATIONTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DeleteAllocationTag request structure.
                */
                class DeleteAllocationTagRequest : public AbstractModel
                {
                public:
                    DeleteAllocationTagRequest();
                    ~DeleteAllocationTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cost allocation tag key
                     * @return TagKey Cost allocation tag key
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置Cost allocation tag key
                     * @param _tagKey Cost allocation tag key
                     * 
                     */
                    void SetTagKey(const std::vector<std::string>& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * Cost allocation tag key
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DELETEALLOCATIONTAGREQUEST_H_
