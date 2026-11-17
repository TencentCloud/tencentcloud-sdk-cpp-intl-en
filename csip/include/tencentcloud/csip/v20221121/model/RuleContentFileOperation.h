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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 
                */
                class RuleContentFileOperation : public AbstractModel
                {
                public:
                    RuleContentFileOperation();
                    ~RuleContentFileOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Process 
                     * 
                     */
                    RuleContentProcessInfo GetProcess() const;

                    /**
                     * 设置
                     * @param _process 
                     * 
                     */
                    void SetProcess(const RuleContentProcessInfo& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取
                     * @return ParentProcess 
                     * 
                     */
                    RuleContentProcessInfo GetParentProcess() const;

                    /**
                     * 设置
                     * @param _parentProcess 
                     * 
                     */
                    void SetParentProcess(const RuleContentProcessInfo& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取
                     * @return FilePath 
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置
                     * @param _filePath 
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileActions 
                     * 
                     */
                    std::vector<std::string> GetFileActions() const;

                    /**
                     * 设置
                     * @param _fileActions 
                     * 
                     */
                    void SetFileActions(const std::vector<std::string>& _fileActions);

                    /**
                     * 判断参数 FileActions 是否已赋值
                     * @return FileActions 是否已赋值
                     * 
                     */
                    bool FileActionsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    RuleContentProcessInfo m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 
                     */
                    RuleContentProcessInfo m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileActions;
                    bool m_fileActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_
