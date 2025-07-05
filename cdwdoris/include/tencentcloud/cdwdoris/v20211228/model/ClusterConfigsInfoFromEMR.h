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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ConfigKeyValue.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * It is used to return configuration files and content in XML format, as well as other information related to the configuration files.
                */
                class ClusterConfigsInfoFromEMR : public AbstractModel
                {
                public:
                    ClusterConfigsInfoFromEMR();
                    ~ClusterConfigsInfoFromEMR() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration file's name
                     * @return FileName Configuration file's name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Configuration file's name
                     * @param _fileName Configuration file's name
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
                     * 获取Related attribute information corresponding to the configuration files
                     * @return FileConf Related attribute information corresponding to the configuration files
                     * 
                     */
                    std::string GetFileConf() const;

                    /**
                     * 设置Related attribute information corresponding to the configuration files
                     * @param _fileConf Related attribute information corresponding to the configuration files
                     * 
                     */
                    void SetFileConf(const std::string& _fileConf);

                    /**
                     * 判断参数 FileConf 是否已赋值
                     * @return FileConf 是否已赋值
                     * 
                     */
                    bool FileConfHasBeenSet() const;

                    /**
                     * 获取Other attribute information corresponding to the configuration files
                     * @return KeyConf Other attribute information corresponding to the configuration files
                     * 
                     */
                    std::string GetKeyConf() const;

                    /**
                     * 设置Other attribute information corresponding to the configuration files
                     * @param _keyConf Other attribute information corresponding to the configuration files
                     * 
                     */
                    void SetKeyConf(const std::string& _keyConf);

                    /**
                     * 判断参数 KeyConf 是否已赋值
                     * @return KeyConf 是否已赋值
                     * 
                     */
                    bool KeyConfHasBeenSet() const;

                    /**
                     * 获取Contents of the configuration files, base64 encoded
                     * @return OriParam Contents of the configuration files, base64 encoded
                     * 
                     */
                    std::string GetOriParam() const;

                    /**
                     * 设置Contents of the configuration files, base64 encoded
                     * @param _oriParam Contents of the configuration files, base64 encoded
                     * 
                     */
                    void SetOriParam(const std::string& _oriParam);

                    /**
                     * 判断参数 OriParam 是否已赋值
                     * @return OriParam 是否已赋值
                     * 
                     */
                    bool OriParamHasBeenSet() const;

                    /**
                     * 获取This is used to indicate whether the current configuration file has been modified without a restart, and reminds the user that a restart is needed.
                     * @return NeedRestart This is used to indicate whether the current configuration file has been modified without a restart, and reminds the user that a restart is needed.
                     * 
                     */
                    int64_t GetNeedRestart() const;

                    /**
                     * 设置This is used to indicate whether the current configuration file has been modified without a restart, and reminds the user that a restart is needed.
                     * @param _needRestart This is used to indicate whether the current configuration file has been modified without a restart, and reminds the user that a restart is needed.
                     * 
                     */
                    void SetNeedRestart(const int64_t& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取Configuration file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilePath Configuration file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置Configuration file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filePath Configuration file path
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileKeyValues kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetFileKeyValues() const;

                    /**
                     * 设置kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileKeyValues kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetFileKeyValues(const std::string& _fileKeyValues);

                    /**
                     * 判断参数 FileKeyValues 是否已赋值
                     * @return FileKeyValues 是否已赋值
                     * @deprecated
                     */
                    bool FileKeyValuesHasBeenSet() const;

                    /**
                     * 获取kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileKeyValuesNew kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConfigKeyValue> GetFileKeyValuesNew() const;

                    /**
                     * 设置kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileKeyValuesNew kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileKeyValuesNew(const std::vector<ConfigKeyValue>& _fileKeyValuesNew);

                    /**
                     * 判断参数 FileKeyValuesNew 是否已赋值
                     * @return FileKeyValuesNew 是否已赋值
                     * 
                     */
                    bool FileKeyValuesNewHasBeenSet() const;

                private:

                    /**
                     * Configuration file's name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Related attribute information corresponding to the configuration files
                     */
                    std::string m_fileConf;
                    bool m_fileConfHasBeenSet;

                    /**
                     * Other attribute information corresponding to the configuration files
                     */
                    std::string m_keyConf;
                    bool m_keyConfHasBeenSet;

                    /**
                     * Contents of the configuration files, base64 encoded
                     */
                    std::string m_oriParam;
                    bool m_oriParamHasBeenSet;

                    /**
                     * This is used to indicate whether the current configuration file has been modified without a restart, and reminds the user that a restart is needed.
                     */
                    int64_t m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Configuration file path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileKeyValues;
                    bool m_fileKeyValuesHasBeenSet;

                    /**
                     * kv value of a configuration file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConfigKeyValue> m_fileKeyValuesNew;
                    bool m_fileKeyValuesNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_
