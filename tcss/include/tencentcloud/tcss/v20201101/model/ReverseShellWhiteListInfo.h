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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_

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
                * Information of an allowed reverse shell
                */
                class ReverseShellWhiteListInfo : public AbstractModel
                {
                public:
                    ReverseShellWhiteListInfo();
                    ~ReverseShellWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target IP
                     * @return DstIp Target IP
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP
                     * @param DstIp Target IP
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Target port
                     * @return DstPort Target port
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置Target port
                     * @param DstPort Target port
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Target process
                     * @return ProcessName Target process
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Target process
                     * @param ProcessName Target process
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Array of image IDs. An empty array indicates all.
                     * @return ImageIds Array of image IDs. An empty array indicates all.
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置Array of image IDs. An empty array indicates all.
                     * @param ImageIds Array of image IDs. An empty array indicates all.
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取Allowed item ID, which is empty if the item is newly created.
                     * @return Id Allowed item ID, which is empty if the item is newly created.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Allowed item ID, which is empty if the item is newly created.
                     * @param Id Allowed item ID, which is empty if the item is newly created.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Target IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Target port
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Target process
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Array of image IDs. An empty array indicates all.
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_
