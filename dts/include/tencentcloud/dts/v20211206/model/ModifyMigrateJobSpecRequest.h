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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATEJOBSPECREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATEJOBSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyMigrateJobSpec request structure.
                */
                class ModifyMigrateJobSpecRequest : public AbstractModel
                {
                public:
                    ModifyMigrateJobSpecRequest();
                    ~ModifyMigrateJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return JobId Task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param JobId Task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取New instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * @return NewInstanceClass New instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     */
                    std::string GetNewInstanceClass() const;

                    /**
                     * 设置New instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * @param NewInstanceClass New instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     */
                    void SetNewInstanceClass(const std::string& _newInstanceClass);

                    /**
                     * 判断参数 NewInstanceClass 是否已赋值
                     * @return NewInstanceClass 是否已赋值
                     */
                    bool NewInstanceClassHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * New instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     */
                    std::string m_newInstanceClass;
                    bool m_newInstanceClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATEJOBSPECREQUEST_H_
