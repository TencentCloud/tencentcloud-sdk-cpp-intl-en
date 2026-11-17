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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UploadSkillSecScan request structure.
                */
                class UploadSkillSecScanRequest : public AbstractModel
                {
                public:
                    UploadSkillSecScanRequest();
                    ~UploadSkillSecScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Service ID.</p>
                     * @return ServiceId <p>Service ID.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>Service ID.</p>
                     * @param _serviceId <p>Service ID.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Base64-encoded data of the zip archive.</p>
                     * @return FileData <p>Base64-encoded data of the zip archive.</p>
                     * 
                     */
                    std::string GetFileData() const;

                    /**
                     * 设置<p>Base64-encoded data of the zip archive.</p>
                     * @param _fileData <p>Base64-encoded data of the zip archive.</p>
                     * 
                     */
                    void SetFileData(const std::string& _fileData);

                    /**
                     * 判断参数 FileData 是否已赋值
                     * @return FileData 是否已赋值
                     * 
                     */
                    bool FileDataHasBeenSet() const;

                    /**
                     * 获取<p>Name of the compressed Skill file, ending with .zip.</p>
                     * @return FileName <p>Name of the compressed Skill file, ending with .zip.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Name of the compressed Skill file, ending with .zip.</p>
                     * @param _fileName <p>Name of the compressed Skill file, ending with .zip.</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * <p>Service ID.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Base64-encoded data of the zip archive.</p>
                     */
                    std::string m_fileData;
                    bool m_fileDataHasBeenSet;

                    /**
                     * <p>Name of the compressed Skill file, ending with .zip.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPLOADSKILLSECSCANREQUEST_H_
