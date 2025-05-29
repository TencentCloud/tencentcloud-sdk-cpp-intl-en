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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Call type.
                */
                class CallDetail : public AbstractModel
                {
                public:
                    CallDetail();
                    ~CallDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Associated ID.
                     * @return Id Associated ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Associated ID.
                     * @param _id Associated ID.
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
                     * 获取Call time.
                     * @return CallTime Call time.
                     * 
                     */
                    std::string GetCallTime() const;

                    /**
                     * 设置Call time.
                     * @param _callTime Call time.
                     * 
                     */
                    void SetCallTime(const std::string& _callTime);

                    /**
                     * 判断参数 CallTime 是否已赋值
                     * @return CallTime 是否已赋值
                     * 
                     */
                    bool CallTimeHasBeenSet() const;

                    /**
                     * 获取Total token consumption.
                     * @return TotalTokenUsage Total token consumption.
                     * 
                     */
                    double GetTotalTokenUsage() const;

                    /**
                     * 设置Total token consumption.
                     * @param _totalTokenUsage Total token consumption.
                     * 
                     */
                    void SetTotalTokenUsage(const double& _totalTokenUsage);

                    /**
                     * 判断参数 TotalTokenUsage 是否已赋值
                     * @return TotalTokenUsage 是否已赋值
                     * 
                     */
                    bool TotalTokenUsageHasBeenSet() const;

                    /**
                     * 获取Token consumption for input.
                     * @return InputTokenUsage Token consumption for input.
                     * 
                     */
                    double GetInputTokenUsage() const;

                    /**
                     * 设置Token consumption for input.
                     * @param _inputTokenUsage Token consumption for input.
                     * 
                     */
                    void SetInputTokenUsage(const double& _inputTokenUsage);

                    /**
                     * 判断参数 InputTokenUsage 是否已赋值
                     * @return InputTokenUsage 是否已赋值
                     * 
                     */
                    bool InputTokenUsageHasBeenSet() const;

                    /**
                     * 获取Token consumption for output.
                     * @return OutputTokenUsage Token consumption for output.
                     * 
                     */
                    double GetOutputTokenUsage() const;

                    /**
                     * 设置Token consumption for output.
                     * @param _outputTokenUsage Token consumption for output.
                     * 
                     */
                    void SetOutputTokenUsage(const double& _outputTokenUsage);

                    /**
                     * 判断参数 OutputTokenUsage 是否已赋值
                     * @return OutputTokenUsage 是否已赋值
                     * 
                     */
                    bool OutputTokenUsageHasBeenSet() const;

                    /**
                     * 获取Number of search service calls.
                     * @return SearchUsage Number of search service calls.
                     * 
                     */
                    uint64_t GetSearchUsage() const;

                    /**
                     * 设置Number of search service calls.
                     * @param _searchUsage Number of search service calls.
                     * 
                     */
                    void SetSearchUsage(const uint64_t& _searchUsage);

                    /**
                     * 判断参数 SearchUsage 是否已赋值
                     * @return SearchUsage 是否已赋值
                     * 
                     */
                    bool SearchUsageHasBeenSet() const;

                    /**
                     * 获取Model name.
                     * @return ModelName Model name.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name.
                     * @param _modelName Model name.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Call type.
                     * @return CallType Call type.
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置Call type.
                     * @param _callType Call type.
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Account.
                     * @return UinAccount Account.
                     * 
                     */
                    std::string GetUinAccount() const;

                    /**
                     * 设置Account.
                     * @param _uinAccount Account.
                     * 
                     */
                    void SetUinAccount(const std::string& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取Application name.
                     * @return AppName Application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name.
                     * @param _appName Application name.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Total number of consumed pages.
                     * @return PageUsage Total number of consumed pages.
                     * 
                     */
                    uint64_t GetPageUsage() const;

                    /**
                     * 设置Total number of consumed pages.
                     * @param _pageUsage Total number of consumed pages.
                     * 
                     */
                    void SetPageUsage(const uint64_t& _pageUsage);

                    /**
                     * 判断参数 PageUsage 是否已赋值
                     * @return PageUsage 是否已赋值
                     * 
                     */
                    bool PageUsageHasBeenSet() const;

                    /**
                     * 获取Filter sub-scenario.
                     * @return SubScene Filter sub-scenario.
                     * 
                     */
                    std::string GetSubScene() const;

                    /**
                     * 设置Filter sub-scenario.
                     * @param _subScene Filter sub-scenario.
                     * 
                     */
                    void SetSubScene(const std::string& _subScene);

                    /**
                     * 判断参数 SubScene 是否已赋值
                     * @return SubScene 是否已赋值
                     * 
                     */
                    bool SubSceneHasBeenSet() const;

                private:

                    /**
                     * Associated ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Call time.
                     */
                    std::string m_callTime;
                    bool m_callTimeHasBeenSet;

                    /**
                     * Total token consumption.
                     */
                    double m_totalTokenUsage;
                    bool m_totalTokenUsageHasBeenSet;

                    /**
                     * Token consumption for input.
                     */
                    double m_inputTokenUsage;
                    bool m_inputTokenUsageHasBeenSet;

                    /**
                     * Token consumption for output.
                     */
                    double m_outputTokenUsage;
                    bool m_outputTokenUsageHasBeenSet;

                    /**
                     * Number of search service calls.
                     */
                    uint64_t m_searchUsage;
                    bool m_searchUsageHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Call type.
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Account.
                     */
                    std::string m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Total number of consumed pages.
                     */
                    uint64_t m_pageUsage;
                    bool m_pageUsageHasBeenSet;

                    /**
                     * Filter sub-scenario.
                     */
                    std::string m_subScene;
                    bool m_subSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_
