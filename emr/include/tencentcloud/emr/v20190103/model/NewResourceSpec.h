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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


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
                class NewResourceSpec : public AbstractModel
                {
                public:
                    NewResourceSpec();
                    ~NewResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Describes master node resource
                     * @return MasterResourceSpec Describes master node resource
                     * 
                     */
                    Resource GetMasterResourceSpec() const;

                    /**
                     * 设置Describes master node resource
                     * @param _masterResourceSpec Describes master node resource
                     * 
                     */
                    void SetMasterResourceSpec(const Resource& _masterResourceSpec);

                    /**
                     * 判断参数 MasterResourceSpec 是否已赋值
                     * @return MasterResourceSpec 是否已赋值
                     * 
                     */
                    bool MasterResourceSpecHasBeenSet() const;

                    /**
                     * 获取Describes core node resource
                     * @return CoreResourceSpec Describes core node resource
                     * 
                     */
                    Resource GetCoreResourceSpec() const;

                    /**
                     * 设置Describes core node resource
                     * @param _coreResourceSpec Describes core node resource
                     * 
                     */
                    void SetCoreResourceSpec(const Resource& _coreResourceSpec);

                    /**
                     * 判断参数 CoreResourceSpec 是否已赋值
                     * @return CoreResourceSpec 是否已赋值
                     * 
                     */
                    bool CoreResourceSpecHasBeenSet() const;

                    /**
                     * 获取Describes task node resource
                     * @return TaskResourceSpec Describes task node resource
                     * 
                     */
                    Resource GetTaskResourceSpec() const;

                    /**
                     * 设置Describes task node resource
                     * @param _taskResourceSpec Describes task node resource
                     * 
                     */
                    void SetTaskResourceSpec(const Resource& _taskResourceSpec);

                    /**
                     * 判断参数 TaskResourceSpec 是否已赋值
                     * @return TaskResourceSpec 是否已赋值
                     * 
                     */
                    bool TaskResourceSpecHasBeenSet() const;

                    /**
                     * 获取Number of master nodes
                     * @return MasterCount Number of master nodes
                     * 
                     */
                    int64_t GetMasterCount() const;

                    /**
                     * 设置Number of master nodes
                     * @param _masterCount Number of master nodes
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
                     * 获取Number of core nodes
                     * @return CoreCount Number of core nodes
                     * 
                     */
                    int64_t GetCoreCount() const;

                    /**
                     * 设置Number of core nodes
                     * @param _coreCount Number of core nodes
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
                     * 获取Number of task nodes
                     * @return TaskCount Number of task nodes
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Number of task nodes
                     * @param _taskCount Number of task nodes
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
                     * 获取Describes common node resource
                     * @return CommonResourceSpec Describes common node resource
                     * 
                     */
                    Resource GetCommonResourceSpec() const;

                    /**
                     * 设置Describes common node resource
                     * @param _commonResourceSpec Describes common node resource
                     * 
                     */
                    void SetCommonResourceSpec(const Resource& _commonResourceSpec);

                    /**
                     * 判断参数 CommonResourceSpec 是否已赋值
                     * @return CommonResourceSpec 是否已赋值
                     * 
                     */
                    bool CommonResourceSpecHasBeenSet() const;

                    /**
                     * 获取Number of common nodes
                     * @return CommonCount Number of common nodes
                     * 
                     */
                    int64_t GetCommonCount() const;

                    /**
                     * 设置Number of common nodes
                     * @param _commonCount Number of common nodes
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
                     * Describes master node resource
                     */
                    Resource m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * Describes core node resource
                     */
                    Resource m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * Describes task node resource
                     */
                    Resource m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * Number of master nodes
                     */
                    int64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * Number of core nodes
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Number of task nodes
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Describes common node resource
                     */
                    Resource m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                    /**
                     * Number of common nodes
                     */
                    int64_t m_commonCount;
                    bool m_commonCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_
