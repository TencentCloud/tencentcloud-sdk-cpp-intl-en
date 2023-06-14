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
                * Resource description
                */
                class AllNodeResourceSpec : public AbstractModel
                {
                public:
                    AllNodeResourceSpec();
                    ~AllNodeResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The description of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterResourceSpec The description of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodeResourceSpec GetMasterResourceSpec() const;

                    /**
                     * 设置The description of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterResourceSpec The description of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The description of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoreResourceSpec The description of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodeResourceSpec GetCoreResourceSpec() const;

                    /**
                     * 设置The description of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coreResourceSpec The description of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The description of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskResourceSpec The description of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodeResourceSpec GetTaskResourceSpec() const;

                    /**
                     * 设置The description of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskResourceSpec The description of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The description of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CommonResourceSpec The description of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodeResourceSpec GetCommonResourceSpec() const;

                    /**
                     * 设置The description of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _commonResourceSpec The description of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The number of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterCount The number of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMasterCount() const;

                    /**
                     * 设置The number of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterCount The number of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The number of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoreCount The number of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCoreCount() const;

                    /**
                     * 设置The number of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coreCount The number of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The number of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskCount The number of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置The number of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskCount The number of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The number of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CommonCount The number of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCommonCount() const;

                    /**
                     * 设置The number of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _commonCount The number of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The description of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodeResourceSpec m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * The description of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodeResourceSpec m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * The description of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodeResourceSpec m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * The description of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodeResourceSpec m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                    /**
                     * The number of master nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * The number of core nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * The number of task nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * The number of common nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_commonCount;
                    bool m_commonCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ALLNODERESOURCESPEC_H_
