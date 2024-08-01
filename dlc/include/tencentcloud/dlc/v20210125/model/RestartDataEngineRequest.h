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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_

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
                * RestartDataEngine request structure.
                */
                class RestartDataEngineRequest : public AbstractModel
                {
                public:
                    RestartDataEngineRequest();
                    ~RestartDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine ID
                     * @return DataEngineId Engine ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Engine ID
                     * @param _dataEngineId Engine ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取Whether to restart by force and ignore tasks
                     * @return ForcedOperation Whether to restart by force and ignore tasks
                     * 
                     */
                    bool GetForcedOperation() const;

                    /**
                     * 设置Whether to restart by force and ignore tasks
                     * @param _forcedOperation Whether to restart by force and ignore tasks
                     * 
                     */
                    void SetForcedOperation(const bool& _forcedOperation);

                    /**
                     * 判断参数 ForcedOperation 是否已赋值
                     * @return ForcedOperation 是否已赋值
                     * 
                     */
                    bool ForcedOperationHasBeenSet() const;

                private:

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Whether to restart by force and ignore tasks
                     */
                    bool m_forcedOperation;
                    bool m_forcedOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESTARTDATAENGINEREQUEST_H_
