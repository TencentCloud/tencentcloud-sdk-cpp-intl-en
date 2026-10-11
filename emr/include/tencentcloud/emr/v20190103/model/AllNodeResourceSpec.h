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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ALLNODERESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ALLNODERESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeResourceSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource description.
                */
                class AllNodeResourceSpec : public AbstractModel
                {
                public:
                    AllNodeResourceSpec();
                    ~AllNodeResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Description of Master node resources.
                     * @return MasterResourceSpec Description of Master node resources.
                     * 
                     */
                    NodeResourceSpec GetMasterResourceSpec() const;

                    /**
                     * 设置Description of Master node resources.
                     * @param _masterResourceSpec Description of Master node resources.
                     * 
                     */
                    void SetMasterResourceSpec(const NodeResourceSpec& _masterResourceSpec);

                    /**
                     * 判断参数 MasterResourceSpec 是否已赋值
                     * @return MasterResourceSpec 是否已赋值
                     * 
                     */
                    bool MasterResourceSpecHasBeenSet() const;

                    /**
                     * 获取Description of Core node resources.
                     * @return CoreResourceSpec Description of Core node resources.
                     * 
                     */
                    NodeResourceSpec GetCoreResourceSpec() const;

                    /**
                     * 设置Description of Core node resources.
                     * @param _coreResourceSpec Description of Core node resources.
                     * 
                     */
                    void SetCoreResourceSpec(const NodeResourceSpec& _coreResourceSpec);

                    /**
                     * 判断参数 CoreResourceSpec 是否已赋值
                     * @return CoreResourceSpec 是否已赋值
                     * 
                     */
                    bool CoreResourceSpecHasBeenSet() const;

                    /**
                     * 获取Description of Task node resources.
                     * @return TaskResourceSpec Description of Task node resources.
                     * 
                     */
                    NodeResourceSpec GetTaskResourceSpec() const;

                    /**
                     * 设置Description of Task node resources.
                     * @param _taskResourceSpec Description of Task node resources.
                     * 
                     */
                    void SetTaskResourceSpec(const NodeResourceSpec& _taskResourceSpec);

                    /**
                     * 判断参数 TaskResourceSpec 是否已赋值
                     * @return TaskResourceSpec 是否已赋值
                     * 
                     */
                    bool TaskResourceSpecHasBeenSet() const;

                    /**
                     * 获取Description of Common node resources.
                     * @return CommonResourceSpec Description of Common node resources.
                     * 
                     */
                    NodeResourceSpec GetCommonResourceSpec() const;

                    /**
                     * 设置Description of Common node resources.
                     * @param _commonResourceSpec Description of Common node resources.
                     * 
                     */
                    void SetCommonResourceSpec(const NodeResourceSpec& _commonResourceSpec);

                    /**
                     * 判断参数 CommonResourceSpec 是否已赋值
                     * @return CommonResourceSpec 是否已赋值
                     * 
                     */
                    bool CommonResourceSpecHasBeenSet() const;

                    /**
                     * 获取Number of Master nodes.
                     * @return MasterCount Number of Master nodes.
                     * 
                     */
                    int64_t GetMasterCount() const;

                    /**
                     * 设置Number of Master nodes.
                     * @param _masterCount Number of Master nodes.
                     * 
                     */
                    void SetMasterCount(const int64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取Number of Core nodes.
                     * @return CoreCount Number of Core nodes.
                     * 
                     */
                    int64_t GetCoreCount() const;

                    /**
                     * 设置Number of Core nodes.
                     * @param _coreCount Number of Core nodes.
                     * 
                     */
                    void SetCoreCount(const int64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Number of Task nodes.
                     * @return TaskCount Number of Task nodes.
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Number of Task nodes.
                     * @param _taskCount Number of Task nodes.
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Number of Common nodes.
                     * @return CommonCount Number of Common nodes.
                     * 
                     */
                    int64_t GetCommonCount() const;

                    /**
                     * 设置Number of Common nodes.
                     * @param _commonCount Number of Common nodes.
                     * 
                     */
                    void SetCommonCount(const int64_t& _commonCount);

                    /**
                     * 判断参数 CommonCount 是否已赋值
                     * @return CommonCount 是否已赋值
                     * 
                     */
                    bool CommonCountHasBeenSet() const;

                private:

                    /**
                     * Description of Master node resources.
                     */
                    NodeResourceSpec m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * Description of Core node resources.
                     */
                    NodeResourceSpec m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * Description of Task node resources.
                     */
                    NodeResourceSpec m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * Description of Common node resources.
                     */
                    NodeResourceSpec m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                    /**
                     * Number of Master nodes.
                     */
                    int64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * Number of Core nodes.
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Number of Task nodes.
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Number of Common nodes.
                     */
                    int64_t m_commonCount;
                    bool m_commonCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ALLNODERESOURCESPEC_H_
