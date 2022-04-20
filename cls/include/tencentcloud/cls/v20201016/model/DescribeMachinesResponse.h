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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachines response structure.
                */
                class DescribeMachinesResponse : public AbstractModel
                {
                public:
                    DescribeMachinesResponse();
                    ~DescribeMachinesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Group of machine status information
                     * @return Machines Group of machine status information
                     */
                    std::vector<MachineInfo> GetMachines() const;

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取Whether to enable the automatic update feature for the machine group
                     * @return AutoUpdate Whether to enable the automatic update feature for the machine group
                     */
                    int64_t GetAutoUpdate() const;

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取Preset start time of automatic update of machine group
                     * @return UpdateStartTime Preset start time of automatic update of machine group
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取Preset end time of automatic update of machine group
                     * @return UpdateEndTime Preset end time of automatic update of machine group
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取Latest LogListener version available to the current user
                     * @return LatestAgentVersion Latest LogListener version available to the current user
                     */
                    std::string GetLatestAgentVersion() const;

                    /**
                     * 判断参数 LatestAgentVersion 是否已赋值
                     * @return LatestAgentVersion 是否已赋值
                     */
                    bool LatestAgentVersionHasBeenSet() const;

                    /**
                     * 获取Whether to enable the service log
                     * @return ServiceLogging Whether to enable the service log
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     */
                    bool ServiceLoggingHasBeenSet() const;

                private:

                    /**
                     * Group of machine status information
                     */
                    std::vector<MachineInfo> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * Whether to enable the automatic update feature for the machine group
                     */
                    int64_t m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Preset start time of automatic update of machine group
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * Preset end time of automatic update of machine group
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * Latest LogListener version available to the current user
                     */
                    std::string m_latestAgentVersion;
                    bool m_latestAgentVersionHasBeenSet;

                    /**
                     * Whether to enable the service log
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_
