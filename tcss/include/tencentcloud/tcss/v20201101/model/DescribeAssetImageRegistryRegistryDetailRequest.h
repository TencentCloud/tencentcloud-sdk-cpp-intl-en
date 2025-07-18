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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryRegistryDetail request structure.
                */
                class DescribeAssetImageRegistryRegistryDetailRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryRegistryDetailRequest();
                    ~DescribeAssetImageRegistryRegistryDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique repository ID
                     * @return RegistryId Unique repository ID
                     * 
                     */
                    int64_t GetRegistryId() const;

                    /**
                     * 设置Unique repository ID
                     * @param _registryId Unique repository ID
                     * 
                     */
                    void SetRegistryId(const int64_t& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * Unique repository ID
                     */
                    int64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
