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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DOWNLOADAPPLICATIONCONFIGRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DOWNLOADAPPLICATIONCONFIGRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Application configuration information
                */
                class DownloadApplicationConfigResp : public AbstractModel
                {
                public:
                    DownloadApplicationConfigResp();
                    ~DownloadApplicationConfigResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration information in Base64 format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return File Configuration information in Base64 format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 设置Configuration information in Base64 format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _file Configuration information in Base64 format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFile(const std::string& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * Configuration information in Base64 format
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DOWNLOADAPPLICATIONCONFIGRESP_H_
