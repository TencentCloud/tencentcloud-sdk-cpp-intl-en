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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_VISITDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_VISITDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Page visit data
                */
                class VisitData : public AbstractModel
                {
                public:
                    VisitData();
                    ~VisitData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of visits
                     * @return VisitCount Number of visits
                     * 
                     */
                    int64_t GetVisitCount() const;

                    /**
                     * 设置Number of visits
                     * @param _visitCount Number of visits
                     * 
                     */
                    void SetVisitCount(const int64_t& _visitCount);

                    /**
                     * 判断参数 VisitCount 是否已赋值
                     * @return VisitCount 是否已赋值
                     * 
                     */
                    bool VisitCountHasBeenSet() const;

                    /**
                     * 获取Average pages per device - visit_page_count / active_device_num
                     * @return AvgDeviceVisitDeep Average pages per device - visit_page_count / active_device_num
                     * 
                     */
                    std::string GetAvgDeviceVisitDeep() const;

                    /**
                     * 设置Average pages per device - visit_page_count / active_device_num
                     * @param _avgDeviceVisitDeep Average pages per device - visit_page_count / active_device_num
                     * 
                     */
                    void SetAvgDeviceVisitDeep(const std::string& _avgDeviceVisitDeep);

                    /**
                     * 判断参数 AvgDeviceVisitDeep 是否已赋值
                     * @return AvgDeviceVisitDeep 是否已赋值
                     * 
                     */
                    bool AvgDeviceVisitDeepHasBeenSet() const;

                    /**
                     * 获取Pages per visit - visit_page_count / miniapp_open_num
                     * @return AvgCountVisitDeep Pages per visit - visit_page_count / miniapp_open_num
                     * 
                     */
                    std::string GetAvgCountVisitDeep() const;

                    /**
                     * 设置Pages per visit - visit_page_count / miniapp_open_num
                     * @param _avgCountVisitDeep Pages per visit - visit_page_count / miniapp_open_num
                     * 
                     */
                    void SetAvgCountVisitDeep(const std::string& _avgCountVisitDeep);

                    /**
                     * 判断参数 AvgCountVisitDeep 是否已赋值
                     * @return AvgCountVisitDeep 是否已赋值
                     * 
                     */
                    bool AvgCountVisitDeepHasBeenSet() const;

                    /**
                     * 获取Average visit duration - miniapp_total_duration / visit_page_count
                     * @return AvgPageVisitDuration Average visit duration - miniapp_total_duration / visit_page_count
                     * 
                     */
                    std::string GetAvgPageVisitDuration() const;

                    /**
                     * 设置Average visit duration - miniapp_total_duration / visit_page_count
                     * @param _avgPageVisitDuration Average visit duration - miniapp_total_duration / visit_page_count
                     * 
                     */
                    void SetAvgPageVisitDuration(const std::string& _avgPageVisitDuration);

                    /**
                     * 判断参数 AvgPageVisitDuration 是否已赋值
                     * @return AvgPageVisitDuration 是否已赋值
                     * 
                     */
                    bool AvgPageVisitDurationHasBeenSet() const;

                    /**
                     * 获取Average visit duration per session
miniapp_total_duration/miniapp_open_num
                     * @return AvgCountVisitDuration Average visit duration per session
miniapp_total_duration/miniapp_open_num
                     * 
                     */
                    std::string GetAvgCountVisitDuration() const;

                    /**
                     * 设置Average visit duration per session
miniapp_total_duration/miniapp_open_num
                     * @param _avgCountVisitDuration Average visit duration per session
miniapp_total_duration/miniapp_open_num
                     * 
                     */
                    void SetAvgCountVisitDuration(const std::string& _avgCountVisitDuration);

                    /**
                     * 判断参数 AvgCountVisitDuration 是否已赋值
                     * @return AvgCountVisitDuration 是否已赋值
                     * 
                     */
                    bool AvgCountVisitDurationHasBeenSet() const;

                    /**
                     * 获取Refresh time in YYYYMMDD format
                     * @return DataTime Refresh time in YYYYMMDD format
                     * 
                     */
                    int64_t GetDataTime() const;

                    /**
                     * 设置Refresh time in YYYYMMDD format
                     * @param _dataTime Refresh time in YYYYMMDD format
                     * 
                     */
                    void SetDataTime(const int64_t& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                private:

                    /**
                     * Number of visits
                     */
                    int64_t m_visitCount;
                    bool m_visitCountHasBeenSet;

                    /**
                     * Average pages per device - visit_page_count / active_device_num
                     */
                    std::string m_avgDeviceVisitDeep;
                    bool m_avgDeviceVisitDeepHasBeenSet;

                    /**
                     * Pages per visit - visit_page_count / miniapp_open_num
                     */
                    std::string m_avgCountVisitDeep;
                    bool m_avgCountVisitDeepHasBeenSet;

                    /**
                     * Average visit duration - miniapp_total_duration / visit_page_count
                     */
                    std::string m_avgPageVisitDuration;
                    bool m_avgPageVisitDurationHasBeenSet;

                    /**
                     * Average visit duration per session
miniapp_total_duration/miniapp_open_num
                     */
                    std::string m_avgCountVisitDuration;
                    bool m_avgCountVisitDurationHasBeenSet;

                    /**
                     * Refresh time in YYYYMMDD format
                     */
                    int64_t m_dataTime;
                    bool m_dataTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_VISITDATA_H_
