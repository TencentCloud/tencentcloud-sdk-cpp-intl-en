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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MONITORDATA_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MONITORDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Monitoring data
                */
                class MonitorData : public AbstractModel
                {
                public:
                    MonitorData();
                    ~MonitorData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time in the format of `2018-03-24 23:59:59`
                     * @return StartTime Start time in the format of `2018-03-24 23:59:59`
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of `2018-03-24 23:59:59`
                     * @param StartTime Start time in the format of `2018-03-24 23:59:59`
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of `2018-03-24 23:59:59`
                     * @return EndTime End time in the format of `2018-03-24 23:59:59`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of `2018-03-24 23:59:59`
                     * @param EndTime End time in the format of `2018-03-24 23:59:59`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Monitoring data
                     * @return Data Monitoring data
                     */
                    std::vector<double> GetData() const;

                    /**
                     * 设置Monitoring data
                     * @param Data Monitoring data
                     */
                    void SetData(const std::vector<double>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Start time in the format of `2018-03-24 23:59:59`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of `2018-03-24 23:59:59`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Monitoring data
                     */
                    std::vector<double> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MONITORDATA_H_
