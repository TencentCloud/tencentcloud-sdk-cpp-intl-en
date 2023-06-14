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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_

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
                class RiskSyscallWhiteListInfo : public AbstractModel
                {
                public:
                    RiskSyscallWhiteListInfo();
                    ~RiskSyscallWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Array of image IDs. An empty array indicates all.
                     * @return ImageIds Array of image IDs. An empty array indicates all.
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置Array of image IDs. An empty array indicates all.
                     * @param _imageIds Array of image IDs. An empty array indicates all.
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取Syscall name. The `DescribeRiskSyscallNames` API can be called to get the list of enumerated values.
                     * @return SyscallNames Syscall name. The `DescribeRiskSyscallNames` API can be called to get the list of enumerated values.
                     * 
                     */
                    std::vector<std::string> GetSyscallNames() const;

                    /**
                     * 设置Syscall name. The `DescribeRiskSyscallNames` API can be called to get the list of enumerated values.
                     * @param _syscallNames Syscall name. The `DescribeRiskSyscallNames` API can be called to get the list of enumerated values.
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
                     * 获取Target process
                     * @return ProcessPath Target process
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Target process
                     * @param _processPath Target process
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
                     * 获取Allowed item ID, which is empty if the item is newly created.
                     * @return Id Allowed item ID, which is empty if the item is newly created.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Allowed item ID, which is empty if the item is newly created.
                     * @param _id Allowed item ID, which is empty if the item is newly created.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Array of image IDs. An empty array indicates all.
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * Syscall name. The `DescribeRiskSyscallNames` API can be called to get the list of enumerated values.
                     */
                    std::vector<std::string> m_syscallNames;
                    bool m_syscallNamesHasBeenSet;

                    /**
                     * Target process
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Allowed item ID, which is empty if the item is newly created.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_
