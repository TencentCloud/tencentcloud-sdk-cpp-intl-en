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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZoneConfigImportResult request structure.
                */
                class DescribeZoneConfigImportResultRequest : public AbstractModel
                {
                public:
                    DescribeZoneConfigImportResultRequest();
                    ~DescribeZoneConfigImportResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取It indicates the configuration import task ID for which the result needs to be queried. The import task ID is only retained for 7 days.
                     * @return TaskId It indicates the configuration import task ID for which the result needs to be queried. The import task ID is only retained for 7 days.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置It indicates the configuration import task ID for which the result needs to be queried. The import task ID is only retained for 7 days.
                     * @param _taskId It indicates the configuration import task ID for which the result needs to be queried. The import task ID is only retained for 7 days.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * It indicates the configuration import task ID for which the result needs to be queried. The import task ID is only retained for 7 days.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTREQUEST_H_
