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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTORE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Application repository information.
                */
                class UserApplicationStore : public AbstractModel
                {
                public:
                    UserApplicationStore();
                    ~UserApplicationStore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cos bucket name</p>
                     * @return CosBucket <p>Cos bucket name</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>Cos bucket name</p>
                     * @param _cosBucket <p>Cos bucket name</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>Cos Bucket Region</p>
                     * @return CosRegion <p>Cos Bucket Region</p>
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置<p>Cos Bucket Region</p>
                     * @param _cosRegion <p>Cos Bucket Region</p>
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取<p>Repository type. LOG: application logs; ARCHIVE: application archive.</p>
                     * @return StoreType <p>Repository type. LOG: application logs; ARCHIVE: application archive.</p>
                     * 
                     */
                    std::string GetStoreType() const;

                    /**
                     * 设置<p>Repository type. LOG: application logs; ARCHIVE: application archive.</p>
                     * @param _storeType <p>Repository type. LOG: application logs; ARCHIVE: application archive.</p>
                     * 
                     */
                    void SetStoreType(const std::string& _storeType);

                    /**
                     * 判断参数 StoreType 是否已赋值
                     * @return StoreType 是否已赋值
                     * 
                     */
                    bool StoreTypeHasBeenSet() const;

                    /**
                     * 获取<p>Repository status. ON: enabled; OFF: disabled.</p>
                     * @return StoreState <p>Repository status. ON: enabled; OFF: disabled.</p>
                     * 
                     */
                    std::string GetStoreState() const;

                    /**
                     * 设置<p>Repository status. ON: enabled; OFF: disabled.</p>
                     * @param _storeState <p>Repository status. ON: enabled; OFF: disabled.</p>
                     * 
                     */
                    void SetStoreState(const std::string& _storeState);

                    /**
                     * 判断参数 StoreState 是否已赋值
                     * @return StoreState 是否已赋值
                     * 
                     */
                    bool StoreStateHasBeenSet() const;

                    /**
                     * 获取<p>Repository path</p><p>Primary path data. If StoreType is ARCHIVE and SubStorePaths is configured, the system default value will be used.</p>
                     * @return StorePath <p>Repository path</p><p>Primary path data. If StoreType is ARCHIVE and SubStorePaths is configured, the system default value will be used.</p>
                     * 
                     */
                    std::string GetStorePath() const;

                    /**
                     * 设置<p>Repository path</p><p>Primary path data. If StoreType is ARCHIVE and SubStorePaths is configured, the system default value will be used.</p>
                     * @param _storePath <p>Repository path</p><p>Primary path data. If StoreType is ARCHIVE and SubStorePaths is configured, the system default value will be used.</p>
                     * 
                     */
                    void SetStorePath(const std::string& _storePath);

                    /**
                     * 判断参数 StorePath 是否已赋值
                     * @return StorePath 是否已赋值
                     * 
                     */
                    bool StorePathHasBeenSet() const;

                    /**
                     * 获取<p>Subpath list</p><p>Subpath data (multi-path pattern) supports only ARCHIVE StoreType; up to 25 data entries.</p>
                     * @return SubStorePaths <p>Subpath list</p><p>Subpath data (multi-path pattern) supports only ARCHIVE StoreType; up to 25 data entries.</p>
                     * 
                     */
                    std::vector<std::string> GetSubStorePaths() const;

                    /**
                     * 设置<p>Subpath list</p><p>Subpath data (multi-path pattern) supports only ARCHIVE StoreType; up to 25 data entries.</p>
                     * @param _subStorePaths <p>Subpath list</p><p>Subpath data (multi-path pattern) supports only ARCHIVE StoreType; up to 25 data entries.</p>
                     * 
                     */
                    void SetSubStorePaths(const std::vector<std::string>& _subStorePaths);

                    /**
                     * 判断参数 SubStorePaths 是否已赋值
                     * @return SubStorePaths 是否已赋值
                     * 
                     */
                    bool SubStorePathsHasBeenSet() const;

                private:

                    /**
                     * <p>Cos bucket name</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Cos Bucket Region</p>
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * <p>Repository type. LOG: application logs; ARCHIVE: application archive.</p>
                     */
                    std::string m_storeType;
                    bool m_storeTypeHasBeenSet;

                    /**
                     * <p>Repository status. ON: enabled; OFF: disabled.</p>
                     */
                    std::string m_storeState;
                    bool m_storeStateHasBeenSet;

                    /**
                     * <p>Repository path</p><p>Primary path data. If StoreType is ARCHIVE and SubStorePaths is configured, the system default value will be used.</p>
                     */
                    std::string m_storePath;
                    bool m_storePathHasBeenSet;

                    /**
                     * <p>Subpath list</p><p>Subpath data (multi-path pattern) supports only ARCHIVE StoreType; up to 25 data entries.</p>
                     */
                    std::vector<std::string> m_subStorePaths;
                    bool m_subStorePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTORE_H_
