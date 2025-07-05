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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINEREQUEST_H_

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
                * SuspendResumeDataEngine request structure.
                */
                class SuspendResumeDataEngineRequest : public AbstractModel
                {
                public:
                    SuspendResumeDataEngineRequest();
                    ~SuspendResumeDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of a virtual cluster.
                     * @return DataEngineName The name of a virtual cluster.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置The name of a virtual cluster.
                     * @param _dataEngineName The name of a virtual cluster.
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取The operation type: `suspend` or `resume`.
                     * @return Operate The operation type: `suspend` or `resume`.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置The operation type: `suspend` or `resume`.
                     * @param _operate The operation type: `suspend` or `resume`.
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * The name of a virtual cluster.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * The operation type: `suspend` or `resume`.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINEREQUEST_H_
