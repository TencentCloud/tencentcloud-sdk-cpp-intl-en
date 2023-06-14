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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pre-execution script configuration
                */
                class PreExecuteFileSettings : public AbstractModel
                {
                public:
                    PreExecuteFileSettings();
                    ~PreExecuteFileSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS path to script, which has been disused
                     * @return Path COS path to script, which has been disused
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置COS path to script, which has been disused
                     * @param _path COS path to script, which has been disused
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Execution script parameter
                     * @return Args Execution script parameter
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置Execution script parameter
                     * @param _args Execution script parameter
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取COS bucket name, which has been disused
                     * @return Bucket COS bucket name, which has been disused
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket name, which has been disused
                     * @param _bucket COS bucket name, which has been disused
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS region name, which has been disused
                     * @return Region COS region name, which has been disused
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS region name, which has been disused
                     * @param _region COS region name, which has been disused
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取COS domain data, which has been disused
                     * @return Domain COS domain data, which has been disused
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置COS domain data, which has been disused
                     * @param _domain COS domain data, which has been disused
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Execution sequence
                     * @return RunOrder Execution sequence
                     * 
                     */
                    int64_t GetRunOrder() const;

                    /**
                     * 设置Execution sequence
                     * @param _runOrder Execution sequence
                     * 
                     */
                    void SetRunOrder(const int64_t& _runOrder);

                    /**
                     * 判断参数 RunOrder 是否已赋值
                     * @return RunOrder 是否已赋值
                     * 
                     */
                    bool RunOrderHasBeenSet() const;

                    /**
                     * 获取`resourceAfter` or `clusterAfter`
                     * @return WhenRun `resourceAfter` or `clusterAfter`
                     * 
                     */
                    std::string GetWhenRun() const;

                    /**
                     * 设置`resourceAfter` or `clusterAfter`
                     * @param _whenRun `resourceAfter` or `clusterAfter`
                     * 
                     */
                    void SetWhenRun(const std::string& _whenRun);

                    /**
                     * 判断参数 WhenRun 是否已赋值
                     * @return WhenRun 是否已赋值
                     * 
                     */
                    bool WhenRunHasBeenSet() const;

                    /**
                     * 获取Script name, which has been disused
                     * @return CosFileName Script name, which has been disused
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置Script name, which has been disused
                     * @param _cosFileName Script name, which has been disused
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                    /**
                     * 获取COS address of script
                     * @return CosFileURI COS address of script
                     * 
                     */
                    std::string GetCosFileURI() const;

                    /**
                     * 设置COS address of script
                     * @param _cosFileURI COS address of script
                     * 
                     */
                    void SetCosFileURI(const std::string& _cosFileURI);

                    /**
                     * 判断参数 CosFileURI 是否已赋值
                     * @return CosFileURI 是否已赋值
                     * 
                     */
                    bool CosFileURIHasBeenSet() const;

                    /**
                     * 获取COS `SecretId`
                     * @return CosSecretId COS `SecretId`
                     * 
                     */
                    std::string GetCosSecretId() const;

                    /**
                     * 设置COS `SecretId`
                     * @param _cosSecretId COS `SecretId`
                     * 
                     */
                    void SetCosSecretId(const std::string& _cosSecretId);

                    /**
                     * 判断参数 CosSecretId 是否已赋值
                     * @return CosSecretId 是否已赋值
                     * 
                     */
                    bool CosSecretIdHasBeenSet() const;

                    /**
                     * 获取COS `SecretKey`
                     * @return CosSecretKey COS `SecretKey`
                     * 
                     */
                    std::string GetCosSecretKey() const;

                    /**
                     * 设置COS `SecretKey`
                     * @param _cosSecretKey COS `SecretKey`
                     * 
                     */
                    void SetCosSecretKey(const std::string& _cosSecretKey);

                    /**
                     * 判断参数 CosSecretKey 是否已赋值
                     * @return CosSecretKey 是否已赋值
                     * 
                     */
                    bool CosSecretKeyHasBeenSet() const;

                    /**
                     * 获取COS `appid`, which has been disused
                     * @return AppId COS `appid`, which has been disused
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置COS `appid`, which has been disused
                     * @param _appId COS `appid`, which has been disused
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * COS path to script, which has been disused
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Execution script parameter
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * COS bucket name, which has been disused
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS region name, which has been disused
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * COS domain data, which has been disused
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Execution sequence
                     */
                    int64_t m_runOrder;
                    bool m_runOrderHasBeenSet;

                    /**
                     * `resourceAfter` or `clusterAfter`
                     */
                    std::string m_whenRun;
                    bool m_whenRunHasBeenSet;

                    /**
                     * Script name, which has been disused
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                    /**
                     * COS address of script
                     */
                    std::string m_cosFileURI;
                    bool m_cosFileURIHasBeenSet;

                    /**
                     * COS `SecretId`
                     */
                    std::string m_cosSecretId;
                    bool m_cosSecretIdHasBeenSet;

                    /**
                     * COS `SecretKey`
                     */
                    std::string m_cosSecretKey;
                    bool m_cosSecretKeyHasBeenSet;

                    /**
                     * COS `appid`, which has been disused
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
