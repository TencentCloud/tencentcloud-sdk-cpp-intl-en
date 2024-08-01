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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>
#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateUserDataEngineConfig request structure.
                */
                class UpdateUserDataEngineConfigRequest : public AbstractModel
                {
                public:
                    UpdateUserDataEngineConfigRequest();
                    ~UpdateUserDataEngineConfigRequest() = default;
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
                     * 获取Collection of user-defined engine configuration items. This parameter needs to input all the configuration items users should add. For example, if there is a configuration item named k1:v1 while k2:v2 needs to be added, [k1:v1,k2:v2] should be passed.
                     * @return DataEngineConfigPairs Collection of user-defined engine configuration items. This parameter needs to input all the configuration items users should add. For example, if there is a configuration item named k1:v1 while k2:v2 needs to be added, [k1:v1,k2:v2] should be passed.
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置Collection of user-defined engine configuration items. This parameter needs to input all the configuration items users should add. For example, if there is a configuration item named k1:v1 while k2:v2 needs to be added, [k1:v1,k2:v2] should be passed.
                     * @param _dataEngineConfigPairs Collection of user-defined engine configuration items. This parameter needs to input all the configuration items users should add. For example, if there is a configuration item named k1:v1 while k2:v2 needs to be added, [k1:v1,k2:v2] should be passed.
                     * 
                     */
                    void SetDataEngineConfigPairs(const std::vector<DataEngineConfigPair>& _dataEngineConfigPairs);

                    /**
                     * 判断参数 DataEngineConfigPairs 是否已赋值
                     * @return DataEngineConfigPairs 是否已赋值
                     * 
                     */
                    bool DataEngineConfigPairsHasBeenSet() const;

                    /**
                     * 获取Template of the resource configuration of the job engine
                     * @return SessionResourceTemplate Template of the resource configuration of the job engine
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置Template of the resource configuration of the job engine
                     * @param _sessionResourceTemplate Template of the resource configuration of the job engine
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                private:

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Collection of user-defined engine configuration items. This parameter needs to input all the configuration items users should add. For example, if there is a configuration item named k1:v1 while k2:v2 needs to be added, [k1:v1,k2:v2] should be passed.
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * Template of the resource configuration of the job engine
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEUSERDATAENGINECONFIGREQUEST_H_
