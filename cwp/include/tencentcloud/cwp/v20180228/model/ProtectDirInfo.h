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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List of protected directories
                */
                class ProtectDirInfo : public AbstractModel
                {
                public:
                    ProtectDirInfo();
                    ~ProtectDirInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Website name
                     * @return DirName Website name
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置Website name
                     * @param _dirName Website name
                     * 
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     * 
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取Website protection directory address
                     * @return DirPath Website protection directory address
                     * 
                     */
                    std::string GetDirPath() const;

                    /**
                     * 设置Website protection directory address
                     * @param _dirPath Website protection directory address
                     * 
                     */
                    void SetDirPath(const std::string& _dirPath);

                    /**
                     * 判断参数 DirPath 是否已赋值
                     * @return DirPath 是否已赋值
                     * 
                     */
                    bool DirPathHasBeenSet() const;

                    /**
                     * 获取Number of associated servers
                     * @return RelatedServerNum Number of associated servers
                     * 
                     */
                    uint64_t GetRelatedServerNum() const;

                    /**
                     * 设置Number of associated servers
                     * @param _relatedServerNum Number of associated servers
                     * 
                     */
                    void SetRelatedServerNum(const uint64_t& _relatedServerNum);

                    /**
                     * 判断参数 RelatedServerNum 是否已赋值
                     * @return RelatedServerNum 是否已赋值
                     * 
                     */
                    bool RelatedServerNumHasBeenSet() const;

                    /**
                     * 获取Number of protected servers
                     * @return ProtectServerNum Number of protected servers
                     * 
                     */
                    uint64_t GetProtectServerNum() const;

                    /**
                     * 设置Number of protected servers
                     * @param _protectServerNum Number of protected servers
                     * 
                     */
                    void SetProtectServerNum(const uint64_t& _protectServerNum);

                    /**
                     * 判断参数 ProtectServerNum 是否已赋值
                     * @return ProtectServerNum 是否已赋值
                     * 
                     */
                    bool ProtectServerNumHasBeenSet() const;

                    /**
                     * 获取Number of unprotected servers
                     * @return NoProtectServerNum Number of unprotected servers
                     * 
                     */
                    uint64_t GetNoProtectServerNum() const;

                    /**
                     * 设置Number of unprotected servers
                     * @param _noProtectServerNum Number of unprotected servers
                     * 
                     */
                    void SetNoProtectServerNum(const uint64_t& _noProtectServerNum);

                    /**
                     * 判断参数 NoProtectServerNum 是否已赋值
                     * @return NoProtectServerNum 是否已赋值
                     * 
                     */
                    bool NoProtectServerNumHasBeenSet() const;

                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取Protection status
                     * @return ProtectStatus Protection status
                     * 
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置Protection status
                     * @param _protectStatus Protection status
                     * 
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取Protection exception
                     * @return ProtectException Protection exception
                     * 
                     */
                    uint64_t GetProtectException() const;

                    /**
                     * 设置Protection exception
                     * @param _protectException Protection exception
                     * 
                     */
                    void SetProtectException(const uint64_t& _protectException);

                    /**
                     * 判断参数 ProtectException 是否已赋值
                     * @return ProtectException 是否已赋值
                     * 
                     */
                    bool ProtectExceptionHasBeenSet() const;

                    /**
                     * 获取Auto recovery switch (returned when filtering Quuid by Filters). Default value: 0
                     * @return AutoRestoreSwitchStatus Auto recovery switch (returned when filtering Quuid by Filters). Default value: 0
                     * 
                     */
                    uint64_t GetAutoRestoreSwitchStatus() const;

                    /**
                     * 设置Auto recovery switch (returned when filtering Quuid by Filters). Default value: 0
                     * @param _autoRestoreSwitchStatus Auto recovery switch (returned when filtering Quuid by Filters). Default value: 0
                     * 
                     */
                    void SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus);

                    /**
                     * 判断参数 AutoRestoreSwitchStatus 是否已赋值
                     * @return AutoRestoreSwitchStatus 是否已赋值
                     * 
                     */
                    bool AutoRestoreSwitchStatusHasBeenSet() const;

                    /**
                     * 获取First activation time of protection
                     * @return FirstProtectTime First activation time of protection
                     * 
                     */
                    std::string GetFirstProtectTime() const;

                    /**
                     * 设置First activation time of protection
                     * @param _firstProtectTime First activation time of protection
                     * 
                     */
                    void SetFirstProtectTime(const std::string& _firstProtectTime);

                    /**
                     * 判断参数 FirstProtectTime 是否已赋值
                     * @return FirstProtectTime 是否已赋值
                     * 
                     */
                    bool FirstProtectTimeHasBeenSet() const;

                    /**
                     * 获取Latest activation time of protection
                     * @return LatestProtectTime Latest activation time of protection
                     * 
                     */
                    std::string GetLatestProtectTime() const;

                    /**
                     * 设置Latest activation time of protection
                     * @param _latestProtectTime Latest activation time of protection
                     * 
                     */
                    void SetLatestProtectTime(const std::string& _latestProtectTime);

                    /**
                     * 判断参数 LatestProtectTime 是否已赋值
                     * @return LatestProtectTime 是否已赋值
                     * 
                     */
                    bool LatestProtectTimeHasBeenSet() const;

                    /**
                     * 获取Protected file types
                     * @return ProtectFileType Protected file types
                     * 
                     */
                    std::string GetProtectFileType() const;

                    /**
                     * 设置Protected file types
                     * @param _protectFileType Protected file types
                     * 
                     */
                    void SetProtectFileType(const std::string& _protectFileType);

                    /**
                     * 判断参数 ProtectFileType 是否已赋值
                     * @return ProtectFileType 是否已赋值
                     * 
                     */
                    bool ProtectFileTypeHasBeenSet() const;

                    /**
                     * 获取Total number of protected files
                     * @return ProtectFilesCount Total number of protected files
                     * 
                     */
                    int64_t GetProtectFilesCount() const;

                    /**
                     * 设置Total number of protected files
                     * @param _protectFilesCount Total number of protected files
                     * 
                     */
                    void SetProtectFilesCount(const int64_t& _protectFilesCount);

                    /**
                     * 判断参数 ProtectFilesCount 是否已赋值
                     * @return ProtectFilesCount 是否已赋值
                     * 
                     */
                    bool ProtectFilesCountHasBeenSet() const;

                private:

                    /**
                     * Website name
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * Website protection directory address
                     */
                    std::string m_dirPath;
                    bool m_dirPathHasBeenSet;

                    /**
                     * Number of associated servers
                     */
                    uint64_t m_relatedServerNum;
                    bool m_relatedServerNumHasBeenSet;

                    /**
                     * Number of protected servers
                     */
                    uint64_t m_protectServerNum;
                    bool m_protectServerNumHasBeenSet;

                    /**
                     * Number of unprotected servers
                     */
                    uint64_t m_noProtectServerNum;
                    bool m_noProtectServerNumHasBeenSet;

                    /**
                     * Unique ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Protection status
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * Protection exception
                     */
                    uint64_t m_protectException;
                    bool m_protectExceptionHasBeenSet;

                    /**
                     * Auto recovery switch (returned when filtering Quuid by Filters). Default value: 0
                     */
                    uint64_t m_autoRestoreSwitchStatus;
                    bool m_autoRestoreSwitchStatusHasBeenSet;

                    /**
                     * First activation time of protection
                     */
                    std::string m_firstProtectTime;
                    bool m_firstProtectTimeHasBeenSet;

                    /**
                     * Latest activation time of protection
                     */
                    std::string m_latestProtectTime;
                    bool m_latestProtectTimeHasBeenSet;

                    /**
                     * Protected file types
                     */
                    std::string m_protectFileType;
                    bool m_protectFileTypeHasBeenSet;

                    /**
                     * Total number of protected files
                     */
                    int64_t m_protectFilesCount;
                    bool m_protectFilesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_
