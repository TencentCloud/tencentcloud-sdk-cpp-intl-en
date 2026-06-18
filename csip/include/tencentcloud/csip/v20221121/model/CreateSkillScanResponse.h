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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSkillScan response structure.
                */
                class CreateSkillScanResponse : public AbstractModel
                {
                public:
                    CreateSkillScanResponse();
                    ~CreateSkillScanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SHA256 Hash of the file, used for polling the DescribeSkillScanResult API
Parameter format: sha256:<64-bit hex>
                     * @return ContentHash SHA256 Hash of the file, used for polling the DescribeSkillScanResult API
Parameter format: sha256:<64-bit hex>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取Engine version number actually bound to the current request. The caller should save and explicitly input it in the follow-up DescribeSkillScanResult.
                     * @return EngineVersion Engine version number actually bound to the current request. The caller should save and explicitly input it in the follow-up DescribeSkillScanResult.
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Task status, fixed as SCANNING, indicates the task is received.
                     * @return Status Task status, fixed as SCANNING, indicates the task is received.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Readable operation result description
                     * @return Message Readable operation result description
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * SHA256 Hash of the file, used for polling the DescribeSkillScanResult API
Parameter format: sha256:<64-bit hex>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * Engine version number actually bound to the current request. The caller should save and explicitly input it in the follow-up DescribeSkillScanResult.
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Task status, fixed as SCANNING, indicates the task is received.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Readable operation result description
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_
