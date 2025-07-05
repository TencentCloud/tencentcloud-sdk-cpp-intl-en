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
                     * 获取COS bucket name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosBucket COS bucket name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置COS bucket name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosBucket COS bucket name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取COS bucket region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosRegion COS bucket region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS bucket region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosRegion COS bucket region.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Repository type. LOG: application logs; ARCHIVE: application archive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoreType Repository type. LOG: application logs; ARCHIVE: application archive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStoreType() const;

                    /**
                     * 设置Repository type. LOG: application logs; ARCHIVE: application archive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storeType Repository type. LOG: application logs; ARCHIVE: application archive.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Repository status. ON: enabled; OFF: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoreState Repository status. ON: enabled; OFF: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStoreState() const;

                    /**
                     * 设置Repository status. ON: enabled; OFF: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storeState Repository status. ON: enabled; OFF: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Repository path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorePath Repository path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorePath() const;

                    /**
                     * 设置Repository path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storePath Repository path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorePath(const std::string& _storePath);

                    /**
                     * 判断参数 StorePath 是否已赋值
                     * @return StorePath 是否已赋值
                     * 
                     */
                    bool StorePathHasBeenSet() const;

                private:

                    /**
                     * COS bucket name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * COS bucket region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Repository type. LOG: application logs; ARCHIVE: application archive.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storeType;
                    bool m_storeTypeHasBeenSet;

                    /**
                     * Repository status. ON: enabled; OFF: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storeState;
                    bool m_storeStateHasBeenSet;

                    /**
                     * Repository path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storePath;
                    bool m_storePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTORE_H_
