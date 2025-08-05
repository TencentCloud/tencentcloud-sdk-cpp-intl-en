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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXECRULETASKDATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXECRULETASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Conditional judgment output.
                */
                class ExecRuleTaskData : public AbstractModel
                {
                public:
                    ExecRuleTaskData();
                    ~ExecRuleTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Indexes of nodes that needs to be executed based on the conditional judgment for quality inspection.
                     * @return RearDriveIndex Indexes of nodes that needs to be executed based on the conditional judgment for quality inspection.
                     * 
                     */
                    std::vector<int64_t> GetRearDriveIndex() const;

                    /**
                     * 设置Indexes of nodes that needs to be executed based on the conditional judgment for quality inspection.
                     * @param _rearDriveIndex Indexes of nodes that needs to be executed based on the conditional judgment for quality inspection.
                     * 
                     */
                    void SetRearDriveIndex(const std::vector<int64_t>& _rearDriveIndex);

                    /**
                     * 判断参数 RearDriveIndex 是否已赋值
                     * @return RearDriveIndex 是否已赋值
                     * 
                     */
                    bool RearDriveIndexHasBeenSet() const;

                private:

                    /**
                     * Indexes of nodes that needs to be executed based on the conditional judgment for quality inspection.
                     */
                    std::vector<int64_t> m_rearDriveIndex;
                    bool m_rearDriveIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXECRULETASKDATA_H_
