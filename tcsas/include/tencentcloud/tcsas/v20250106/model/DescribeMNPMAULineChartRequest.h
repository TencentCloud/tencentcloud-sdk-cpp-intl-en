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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAULINECHARTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAULINECHARTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeMNPMAULineChart request structure.
                */
                class DescribeMNPMAULineChartRequest : public AbstractModel
                {
                public:
                    DescribeMNPMAULineChartRequest();
                    ~DescribeMNPMAULineChartRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type: 0 Non-production data, 1 Production data
                     * @return DataType Type: 0 Non-production data, 1 Production data
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置Type: 0 Non-production data, 1 Production data
                     * @param _dataType Type: 0 Non-production data, 1 Production data
                     * 
                     */
                    void SetDataType(const int64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Superapp ID
                     * @return ApplicationId Superapp ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID
                     * @param _applicationId Superapp ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Mini program appid, required. When provided, the query is performed based on the mini program.
                     * @return MNPId Mini program appid, required. When provided, the query is performed based on the mini program.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program appid, required. When provided, the query is performed based on the mini program.
                     * @param _mNPId Mini program appid, required. When provided, the query is performed based on the mini program.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program team ID
                     * @return MNPTeamId Mini program team ID
                     * 
                     */
                    int64_t GetMNPTeamId() const;

                    /**
                     * 设置Mini program team ID
                     * @param _mNPTeamId Mini program team ID
                     * 
                     */
                    void SetMNPTeamId(const int64_t& _mNPTeamId);

                    /**
                     * 判断参数 MNPTeamId 是否已赋值
                     * @return MNPTeamId 是否已赋值
                     * 
                     */
                    bool MNPTeamIdHasBeenSet() const;

                private:

                    /**
                     * Type: 0 Non-production data, 1 Production data
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Superapp ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Mini program appid, required. When provided, the query is performed based on the mini program.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program team ID
                     */
                    int64_t m_mNPTeamId;
                    bool m_mNPTeamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAULINECHARTREQUEST_H_
