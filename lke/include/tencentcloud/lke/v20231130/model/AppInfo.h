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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_

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
                * Application details
                */
                class AppInfo : public AbstractModel
                {
                public:
                    AppInfo();
                    ~AppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @return AppType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @param _appType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Application type description.
                     * @return AppTypeDesc Application type description.
                     * 
                     */
                    std::string GetAppTypeDesc() const;

                    /**
                     * 设置Application type description.
                     * @param _appTypeDesc Application type description.
                     * 
                     */
                    void SetAppTypeDesc(const std::string& _appTypeDesc);

                    /**
                     * 判断参数 AppTypeDesc 是否已赋值
                     * @return AppTypeDesc 是否已赋值
                     * 
                     */
                    bool AppTypeDescHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return AppBizId Application ID.
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _appBizId Application ID.
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取Application name.
                     * @return Name Application name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Application name.
                     * @param _name Application name.
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
                     * 获取Application avatar.
                     * @return Avatar Application avatar.
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置Application avatar.
                     * @param _avatar Application avatar.
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取Application description.
                     * @return Desc Application description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Application description.
                     * @param _desc Application description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Application status. 1: offline; 2: running; 3: disabled.
                     * @return AppStatus Application status. 1: offline; 2: running; 3: disabled.
                     * 
                     */
                    uint64_t GetAppStatus() const;

                    /**
                     * 设置Application status. 1: offline; 2: running; 3: disabled.
                     * @param _appStatus Application status. 1: offline; 2: running; 3: disabled.
                     * 
                     */
                    void SetAppStatus(const uint64_t& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return AppStatusDesc Status description.
                     * 
                     */
                    std::string GetAppStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _appStatusDesc Status description.
                     * 
                     */
                    void SetAppStatusDesc(const std::string& _appStatusDesc);

                    /**
                     * 判断参数 AppStatusDesc 是否已赋值
                     * @return AppStatusDesc 是否已赋值
                     * 
                     */
                    bool AppStatusDescHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last modifier.
                     * @return Operator Last modifier.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Last modifier.
                     * @param _operator Last modifier.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

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
                     * 获取Alias of the generative model.
                     * @return ModelAliasName Alias of the generative model.
                     * 
                     */
                    std::string GetModelAliasName() const;

                    /**
                     * 设置Alias of the generative model.
                     * @param _modelAliasName Alias of the generative model.
                     * 
                     */
                    void SetModelAliasName(const std::string& _modelAliasName);

                    /**
                     * 判断参数 ModelAliasName 是否已赋值
                     * @return ModelAliasName 是否已赋值
                     * 
                     */
                    bool ModelAliasNameHasBeenSet() const;

                    /**
                     * 获取Application mode: standard; agent; single_workflow.
                     * @return Pattern Application mode: standard; agent; single_workflow.
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Application mode: standard; agent; single_workflow.
                     * @param _pattern Application mode: standard; agent; single_workflow.
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Alias of the thought model.
                     * @return ThoughtModelAliasName Alias of the thought model.
                     * 
                     */
                    std::string GetThoughtModelAliasName() const;

                    /**
                     * 设置Alias of the thought model.
                     * @param _thoughtModelAliasName Alias of the thought model.
                     * 
                     */
                    void SetThoughtModelAliasName(const std::string& _thoughtModelAliasName);

                    /**
                     * 判断参数 ThoughtModelAliasName 是否已赋值
                     * @return ThoughtModelAliasName 是否已赋值
                     * 
                     */
                    bool ThoughtModelAliasNameHasBeenSet() const;

                private:

                    /**
                     * Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Application type description.
                     */
                    std::string m_appTypeDesc;
                    bool m_appTypeDescHasBeenSet;

                    /**
                     * Application ID.
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Application avatar.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * Application description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Application status. 1: offline; 2: running; 3: disabled.
                     */
                    uint64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_appStatusDesc;
                    bool m_appStatusDescHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last modifier.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Alias of the generative model.
                     */
                    std::string m_modelAliasName;
                    bool m_modelAliasNameHasBeenSet;

                    /**
                     * Application mode: standard; agent; single_workflow.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Alias of the thought model.
                     */
                    std::string m_thoughtModelAliasName;
                    bool m_thoughtModelAliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_
