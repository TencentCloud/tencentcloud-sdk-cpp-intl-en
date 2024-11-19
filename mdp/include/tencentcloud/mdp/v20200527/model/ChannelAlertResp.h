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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELALERTRESP_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELALERTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ProgramAlertCounts.h>
#include <tencentcloud/mdp/v20200527/model/ProgramAlertInfos.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Linear assembly channel alarm return information.
                */
                class ChannelAlertResp : public AbstractModel
                {
                public:
                    ChannelAlertResp();
                    ~ChannelAlertResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Program alarm aggregation information.
                     * @return ProgramAlertCounts Program alarm aggregation information.
                     * 
                     */
                    std::vector<ProgramAlertCounts> GetProgramAlertCounts() const;

                    /**
                     * 设置Program alarm aggregation information.
                     * @param _programAlertCounts Program alarm aggregation information.
                     * 
                     */
                    void SetProgramAlertCounts(const std::vector<ProgramAlertCounts>& _programAlertCounts);

                    /**
                     * 判断参数 ProgramAlertCounts 是否已赋值
                     * @return ProgramAlertCounts 是否已赋值
                     * 
                     */
                    bool ProgramAlertCountsHasBeenSet() const;

                    /**
                     * 获取Program alarm details.
                     * @return ProgramAlertInfos Program alarm details.
                     * 
                     */
                    std::vector<ProgramAlertInfos> GetProgramAlertInfos() const;

                    /**
                     * 设置Program alarm details.
                     * @param _programAlertInfos Program alarm details.
                     * 
                     */
                    void SetProgramAlertInfos(const std::vector<ProgramAlertInfos>& _programAlertInfos);

                    /**
                     * 判断参数 ProgramAlertInfos 是否已赋值
                     * @return ProgramAlertInfos 是否已赋值
                     * 
                     */
                    bool ProgramAlertInfosHasBeenSet() const;

                private:

                    /**
                     * Program alarm aggregation information.
                     */
                    std::vector<ProgramAlertCounts> m_programAlertCounts;
                    bool m_programAlertCountsHasBeenSet;

                    /**
                     * Program alarm details.
                     */
                    std::vector<ProgramAlertInfos> m_programAlertInfos;
                    bool m_programAlertInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELALERTRESP_H_
