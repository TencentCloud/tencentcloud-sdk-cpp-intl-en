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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Engine configuration information
                */
                class DataEngineConfigInstanceInfo : public AbstractModel
                {
                public:
                    DataEngineConfigInstanceInfo();
                    ~DataEngineConfigInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineId Engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Engine ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineId Engine ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Collection of user-defined configuration items
                     * @return DataEngineConfigPairs Collection of user-defined configuration items
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置Collection of user-defined configuration items
                     * @param _dataEngineConfigPairs Collection of user-defined configuration items
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
                     * 获取Template of the resource parameter configuration of the job cluster
                     * @return SessionResourceTemplate Template of the resource parameter configuration of the job cluster
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置Template of the resource parameter configuration of the job cluster
                     * @param _sessionResourceTemplate Template of the resource parameter configuration of the job cluster
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Collection of user-defined configuration items
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * Template of the resource parameter configuration of the job cluster
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINECONFIGINSTANCEINFO_H_
