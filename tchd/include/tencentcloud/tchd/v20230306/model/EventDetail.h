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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * Describes information on an event.
                */
                class EventDetail : public AbstractModel
                {
                public:
                    EventDetail();
                    ~EventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product ID.
                     * @return ProductId Product ID.
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Product ID.
                     * @param _productId Product ID.
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Product name.
                     * @return ProductName Product name.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name.
                     * @param _productName Product name.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name.
                     * @return RegionName Region name.
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name.
                     * @param _regionName Region name.
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Event start time.
                     * @return StartTime Event start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Event start time.
                     * @param _startTime Event start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Event end time. If the event is still ongoing and has not ended, the end time will be empty.
                     * @return EndTime Event end time. If the event is still ongoing and has not ended, the end time will be empty.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Event end time. If the event is still ongoing and has not ended, the end time will be empty.
                     * @param _endTime Event end time. If the event is still ongoing and has not ended, the end time will be empty.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Current status: Normally, Informational, Degradation.
                     * @return CurrentStatus Current status: Normally, Informational, Degradation.
                     * 
                     */
                    std::string GetCurrentStatus() const;

                    /**
                     * 设置Current status: Normally, Informational, Degradation.
                     * @param _currentStatus Current status: Normally, Informational, Degradation.
                     * 
                     */
                    void SetCurrentStatus(const std::string& _currentStatus);

                    /**
                     * 判断参数 CurrentStatus 是否已赋值
                     * @return CurrentStatus 是否已赋值
                     * 
                     */
                    bool CurrentStatusHasBeenSet() const;

                private:

                    /**
                     * Product ID.
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Product name.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Region ID.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Event start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Event end time. If the event is still ongoing and has not ended, the end time will be empty.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Current status: Normally, Informational, Degradation.
                     */
                    std::string m_currentStatus;
                    bool m_currentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_
