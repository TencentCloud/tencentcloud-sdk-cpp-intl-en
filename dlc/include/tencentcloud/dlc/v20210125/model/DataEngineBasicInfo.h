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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEBASICINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Basic information of DataEngine
                */
                class DataEngineBasicInfo : public AbstractModel
                {
                public:
                    DataEngineBasicInfo();
                    ~DataEngineBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DataEngine name
                     * @return DataEngineName DataEngine name
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置DataEngine name
                     * @param _dataEngineName DataEngine name
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
                     * 获取Data engine status: -2: deleted; -1: failed; 0: initializing; 1: suspended; 2: running; 3: ready to delete; 4: deleting
                     * @return State Data engine status: -2: deleted; -1: failed; 0: initializing; 1: suspended; 2: running; 3: ready to delete; 4: deleting
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Data engine status: -2: deleted; -1: failed; 0: initializing; 1: suspended; 2: running; 3: ready to delete; 4: deleting
                     * @param _state Data engine status: -2: deleted; -1: failed; 0: initializing; 1: suspended; 2: running; 3: ready to delete; 4: deleting
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Returned information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Returned information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Returned information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Returned information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

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
                     * 获取Engine types, and the valid values are PrestoSQL, SparkSQL, and SparkBatch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineType Engine types, and the valid values are PrestoSQL, SparkSQL, and SparkBatch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineType() const;

                    /**
                     * 设置Engine types, and the valid values are PrestoSQL, SparkSQL, and SparkBatch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineType Engine types, and the valid values are PrestoSQL, SparkSQL, and SparkBatch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineType(const std::string& _dataEngineType);

                    /**
                     * 判断参数 DataEngineType 是否已赋值
                     * @return DataEngineType 是否已赋值
                     * 
                     */
                    bool DataEngineTypeHasBeenSet() const;

                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserUin Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userUin Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                private:

                    /**
                     * DataEngine name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Data engine status: -2: deleted; -1: failed; 0: initializing; 1: suspended; 2: running; 3: ready to delete; 4: deleting
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Returned information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Engine types, and the valid values are PrestoSQL, SparkSQL, and SparkBatch.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineType;
                    bool m_dataEngineTypeHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEBASICINFO_H_
