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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_VODREMUXTASKINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_VODREMUXTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/InputFileInfo.h>
#include <tencentcloud/mdp/v20200527/model/OutputStorage.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * VOD remux task informations.
                */
                class VodRemuxTaskInfo : public AbstractModel
                {
                public:
                    VodRemuxTaskInfo();
                    ~VodRemuxTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VOD remux task ID.
                     * @return Id VOD remux task ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置VOD remux task ID.
                     * @param _id VOD remux task ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取VOD remux task name.
                     * @return Name VOD remux task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置VOD remux task name.
                     * @param _name VOD remux task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取VOD remux task type.
                     * @return Type VOD remux task type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置VOD remux task type.
                     * @param _type VOD remux task type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取VOD remux task input file information.
                     * @return InputFileInfo VOD remux task input file information.
                     * 
                     */
                    InputFileInfo GetInputFileInfo() const;

                    /**
                     * 设置VOD remux task input file information.
                     * @param _inputFileInfo VOD remux task input file information.
                     * 
                     */
                    void SetInputFileInfo(const InputFileInfo& _inputFileInfo);

                    /**
                     * 判断参数 InputFileInfo 是否已赋值
                     * @return InputFileInfo 是否已赋值
                     * 
                     */
                    bool InputFileInfoHasBeenSet() const;

                    /**
                     * 获取VOD remux task output storage information.
                     * @return OutputStorage VOD remux task output storage information.
                     * 
                     */
                    OutputStorage GetOutputStorage() const;

                    /**
                     * 设置VOD remux task output storage information.
                     * @param _outputStorage VOD remux task output storage information.
                     * 
                     */
                    void SetOutputStorage(const OutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取VOD remux task created time.
                     * @return CreateTime VOD remux task created time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置VOD remux task created time.
                     * @param _createTime VOD remux task created time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取VOD remux task updated time.
                     * @return UpdateTime VOD remux task updated time.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置VOD remux task updated time.
                     * @param _updateTime VOD remux task updated time.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取VOD remux task's state.
                     * @return State VOD remux task's state.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置VOD remux task's state.
                     * @param _state VOD remux task's state.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取VOD remux task's error message.
                     * @return ErrorMsg VOD remux task's error message.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置VOD remux task's error message.
                     * @param _errorMsg VOD remux task's error message.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取VOD remux task process started time.
                     * @return StartTime VOD remux task process started time.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置VOD remux task process started time.
                     * @param _startTime VOD remux task process started time.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取VOD remux task process end time.
                     * @return EndTime VOD remux task process end time.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置VOD remux task process end time.
                     * @param _endTime VOD remux task process end time.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Common Params. For more information, please see the list of regions supported by the product.
                     * @return Region Common Params. For more information, please see the list of regions supported by the product.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Common Params. For more information, please see the list of regions supported by the product.
                     * @param _region Common Params. For more information, please see the list of regions supported by the product.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * VOD remux task ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * VOD remux task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * VOD remux task type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * VOD remux task input file information.
                     */
                    InputFileInfo m_inputFileInfo;
                    bool m_inputFileInfoHasBeenSet;

                    /**
                     * VOD remux task output storage information.
                     */
                    OutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * VOD remux task created time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * VOD remux task updated time.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * VOD remux task's state.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * VOD remux task's error message.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * VOD remux task process started time.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * VOD remux task process end time.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Common Params. For more information, please see the list of regions supported by the product.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_VODREMUXTASKINFO_H_
