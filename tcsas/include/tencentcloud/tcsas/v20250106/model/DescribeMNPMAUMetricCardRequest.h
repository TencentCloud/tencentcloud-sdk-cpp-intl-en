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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAUMETRICCARDREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAUMETRICCARDREQUEST_H_

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
                * DescribeMNPMAUMetricCard request structure.
                */
                class DescribeMNPMAUMetricCardRequest : public AbstractModel
                {
                public:
                    DescribeMNPMAUMetricCardRequest();
                    ~DescribeMNPMAUMetricCardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in YYYYMMDD format
                     * @return SourceMonth Start time in YYYYMMDD format
                     * 
                     */
                    int64_t GetSourceMonth() const;

                    /**
                     * 设置Start time in YYYYMMDD format
                     * @param _sourceMonth Start time in YYYYMMDD format
                     * 
                     */
                    void SetSourceMonth(const int64_t& _sourceMonth);

                    /**
                     * 判断参数 SourceMonth 是否已赋值
                     * @return SourceMonth 是否已赋值
                     * 
                     */
                    bool SourceMonthHasBeenSet() const;

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
                     * 获取End time in YYYYMMDD format
                     * @return TargetMonth End time in YYYYMMDD format
                     * 
                     */
                    int64_t GetTargetMonth() const;

                    /**
                     * 设置End time in YYYYMMDD format
                     * @param _targetMonth End time in YYYYMMDD format
                     * 
                     */
                    void SetTargetMonth(const int64_t& _targetMonth);

                    /**
                     * 判断参数 TargetMonth 是否已赋值
                     * @return TargetMonth 是否已赋值
                     * 
                     */
                    bool TargetMonthHasBeenSet() const;

                    /**
                     * 获取Superapp ID starting with App
                     * @return ApplicationId Superapp ID starting with App
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID starting with App
                     * @param _applicationId Superapp ID starting with App
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
                     * 获取Mini program team ID, required. When provided, the query is performed based on the mini program team.
                     * @return MNPTeamId Mini program team ID, required. When provided, the query is performed based on the mini program team.
                     * 
                     */
                    int64_t GetMNPTeamId() const;

                    /**
                     * 设置Mini program team ID, required. When provided, the query is performed based on the mini program team.
                     * @param _mNPTeamId Mini program team ID, required. When provided, the query is performed based on the mini program team.
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
                     * Start time in YYYYMMDD format
                     */
                    int64_t m_sourceMonth;
                    bool m_sourceMonthHasBeenSet;

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
                     * End time in YYYYMMDD format
                     */
                    int64_t m_targetMonth;
                    bool m_targetMonthHasBeenSet;

                    /**
                     * Superapp ID starting with App
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Mini program appid, required. When provided, the query is performed based on the mini program.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program team ID, required. When provided, the query is performed based on the mini program team.
                     */
                    int64_t m_mNPTeamId;
                    bool m_mNPTeamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMAUMETRICCARDREQUEST_H_
