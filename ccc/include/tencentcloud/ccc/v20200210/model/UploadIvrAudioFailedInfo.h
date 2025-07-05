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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Failed to upload audio file information
                */
                class UploadIvrAudioFailedInfo : public AbstractModel
                {
                public:
                    UploadIvrAudioFailedInfo();
                    ~UploadIvrAudioFailedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename.
                     * @return FileName Filename.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename.
                     * @param _fileName Filename.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Reason for failure.
                     * @return FailedMsg Reason for failure.
                     * 
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置Reason for failure.
                     * @param _failedMsg Reason for failure.
                     * 
                     */
                    void SetFailedMsg(const std::string& _failedMsg);

                    /**
                     * 判断参数 FailedMsg 是否已赋值
                     * @return FailedMsg 是否已赋值
                     * 
                     */
                    bool FailedMsgHasBeenSet() const;

                private:

                    /**
                     * Filename.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Reason for failure.
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_
