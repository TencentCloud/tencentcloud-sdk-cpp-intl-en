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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEnginesScaleDetail request structure.
                */
                class DescribeDataEnginesScaleDetailRequest : public AbstractModel
                {
                public:
                    DescribeDataEnginesScaleDetailRequest();
                    ~DescribeDataEnginesScaleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine name list
                     * @return DataEngineNames Engine name list
                     * 
                     */
                    std::vector<std::string> GetDataEngineNames() const;

                    /**
                     * 设置Engine name list
                     * @param _dataEngineNames Engine name list
                     * 
                     */
                    void SetDataEngineNames(const std::vector<std::string>& _dataEngineNames);

                    /**
                     * 判断参数 DataEngineNames 是否已赋值
                     * @return DataEngineNames 是否已赋值
                     * 
                     */
                    bool DataEngineNamesHasBeenSet() const;

                    /**
                     * 获取Start time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * @return StartTime Start time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * @param _startTime Start time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
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
                     * 获取End time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * @return EndTime End time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * @param _endTime End time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Engine name list
                     */
                    std::vector<std::string> m_dataEngineNames;
                    bool m_dataEngineNamesHasBeenSet;

                    /**
                     * Start time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, and the format is yyyy-MM-dd HH:mm:ss. It can query the records within one month at most.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_
