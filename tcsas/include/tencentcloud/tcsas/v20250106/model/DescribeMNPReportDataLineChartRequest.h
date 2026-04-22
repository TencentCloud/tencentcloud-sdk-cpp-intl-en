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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPREPORTDATALINECHARTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPREPORTDATALINECHARTREQUEST_H_

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
                * DescribeMNPReportDataLineChart request structure.
                */
                class DescribeMNPReportDataLineChartRequest : public AbstractModel
                {
                public:
                    DescribeMNPReportDataLineChartRequest();
                    ~DescribeMNPReportDataLineChartRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program appid
                     * @return MNPId Mini program appid
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program appid
                     * @param _mNPId Mini program appid
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
                     * 获取Fixed value: mnp_data_analysis
                     * @return ReportId Fixed value: mnp_data_analysis
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置Fixed value: mnp_data_analysis
                     * @param _reportId Fixed value: mnp_data_analysis
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取IndexId (optional):
active_device_num: Active users
new_device_num: New users
total_user_num: Total users
share_num: Number of shares
miniapp_open_num: Number of opens
avg_device_open_num: Average opens per user
avg_device_open_duration: Average duration per user
avg_count_open_duration: Average duration per session
                     * @return IndexId IndexId (optional):
active_device_num: Active users
new_device_num: New users
total_user_num: Total users
share_num: Number of shares
miniapp_open_num: Number of opens
avg_device_open_num: Average opens per user
avg_device_open_duration: Average duration per user
avg_count_open_duration: Average duration per session
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置IndexId (optional):
active_device_num: Active users
new_device_num: New users
total_user_num: Total users
share_num: Number of shares
miniapp_open_num: Number of opens
avg_device_open_num: Average opens per user
avg_device_open_duration: Average duration per user
avg_count_open_duration: Average duration per session
                     * @param _indexId IndexId (optional):
active_device_num: Active users
new_device_num: New users
total_user_num: Total users
share_num: Number of shares
miniapp_open_num: Number of opens
avg_device_open_num: Average opens per user
avg_device_open_duration: Average duration per user
avg_count_open_duration: Average duration per session
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取Input parameter base64 string: {"DataType":"1","Platform":0,"BeginDate":20251118,"EndDate":20251124}
                     * @return QueryData Input parameter base64 string: {"DataType":"1","Platform":0,"BeginDate":20251118,"EndDate":20251124}
                     * 
                     */
                    std::string GetQueryData() const;

                    /**
                     * 设置Input parameter base64 string: {"DataType":"1","Platform":0,"BeginDate":20251118,"EndDate":20251124}
                     * @param _queryData Input parameter base64 string: {"DataType":"1","Platform":0,"BeginDate":20251118,"EndDate":20251124}
                     * 
                     */
                    void SetQueryData(const std::string& _queryData);

                    /**
                     * 判断参数 QueryData 是否已赋值
                     * @return QueryData 是否已赋值
                     * 
                     */
                    bool QueryDataHasBeenSet() const;

                private:

                    /**
                     * Mini program appid
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Fixed value: mnp_data_analysis
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * IndexId (optional):
active_device_num: Active users
new_device_num: New users
total_user_num: Total users
share_num: Number of shares
miniapp_open_num: Number of opens
avg_device_open_num: Average opens per user
avg_device_open_duration: Average duration per user
avg_count_open_duration: Average duration per session
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * Input parameter base64 string: {"DataType":"1","Platform":0,"BeginDate":20251118,"EndDate":20251124}
                     */
                    std::string m_queryData;
                    bool m_queryDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPREPORTDATALINECHARTREQUEST_H_
