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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the allowlist of high-risk syscalls
                */
                class RiskSyscallWhiteListBaseInfo : public AbstractModel
                {
                public:
                    RiskSyscallWhiteListBaseInfo();
                    ~RiskSyscallWhiteListBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowed item ID
                     * @return Id Allowed item ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Allowed item ID
                     * @param _id Allowed item ID
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
                     * 获取Number of images
                     * @return ImageCount Number of images
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置Number of images
                     * @param _imageCount Number of images
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取Connection process path
                     * @return ProcessPath Connection process path
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Connection process path
                     * @param _processPath Connection process path
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取List of syscall names
                     * @return SyscallNames List of syscall names
                     * 
                     */
                    std::vector<std::string> GetSyscallNames() const;

                    /**
                     * 设置List of syscall names
                     * @param _syscallNames List of syscall names
                     * 
                     */
                    void SetSyscallNames(const std::vector<std::string>& _syscallNames);

                    /**
                     * 判断参数 SyscallNames 是否已赋值
                     * @return SyscallNames 是否已赋值
                     * 
                     */
                    bool SyscallNamesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * 获取Whether it is allowed globally. `true`: Yes.
                     * @return IsGlobal Whether it is allowed globally. `true`: Yes.
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether it is allowed globally. `true`: Yes.
                     * @param _isGlobal Whether it is allowed globally. `true`: Yes.
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Array of image IDs
                     * @return ImageIds Array of image IDs
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置Array of image IDs
                     * @param _imageIds Array of image IDs
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                private:

                    /**
                     * Allowed item ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Number of images
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * Connection process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * List of syscall names
                     */
                    std::vector<std::string> m_syscallNames;
                    bool m_syscallNamesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether it is allowed globally. `true`: Yes.
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Array of image IDs
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTBASEINFO_H_
