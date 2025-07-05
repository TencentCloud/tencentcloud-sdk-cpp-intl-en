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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEQUOTARESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImageQuota response structure.
                */
                class DescribeImageQuotaResponse : public AbstractModel
                {
                public:
                    DescribeImageQuotaResponse();
                    ~DescribeImageQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The image quota of an account
                     * @return ImageNumQuota The image quota of an account
                     * 
                     */
                    int64_t GetImageNumQuota() const;

                    /**
                     * 判断参数 ImageNumQuota 是否已赋值
                     * @return ImageNumQuota 是否已赋值
                     * 
                     */
                    bool ImageNumQuotaHasBeenSet() const;

                private:

                    /**
                     * The image quota of an account
                     */
                    int64_t m_imageNumQuota;
                    bool m_imageNumQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEQUOTARESPONSE_H_
