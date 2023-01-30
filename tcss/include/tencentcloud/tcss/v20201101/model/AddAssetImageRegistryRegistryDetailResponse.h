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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_

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
                * AddAssetImageRegistryRegistryDetail response structure.
                */
                class AddAssetImageRegistryRegistryDetailResponse : public AbstractModel
                {
                public:
                    AddAssetImageRegistryRegistryDetailResponse();
                    ~AddAssetImageRegistryRegistryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheckErr Connection error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHealthCheckErr() const;

                    /**
                     * 判断参数 HealthCheckErr 是否已赋值
                     * @return HealthCheckErr 是否已赋值
                     */
                    bool HealthCheckErrHasBeenSet() const;

                    /**
                     * 获取Name error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NameRepeatErr Name error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNameRepeatErr() const;

                    /**
                     * 判断参数 NameRepeatErr 是否已赋值
                     * @return NameRepeatErr 是否已赋值
                     */
                    bool NameRepeatErrHasBeenSet() const;

                    /**
                     * 获取Unique repository ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryId Unique repository ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRegistryId() const;

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * Connection error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_healthCheckErr;
                    bool m_healthCheckErrHasBeenSet;

                    /**
                     * Name error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameRepeatErr;
                    bool m_nameRepeatErrHasBeenSet;

                    /**
                     * Unique repository ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
