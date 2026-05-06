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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVICESOURCEITEM_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVICESOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/SourceInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Gateway data source description
                */
                class NativeGatewayServiceSourceItem : public AbstractModel
                {
                public:
                    NativeGatewayServiceSourceItem();
                    ~NativeGatewayServiceSourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayID Gateway instance ID
                     * 
                     */
                    std::string GetGatewayID() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayID Gateway instance ID
                     * 
                     */
                    void SetGatewayID(const std::string& _gatewayID);

                    /**
                     * 判断参数 GatewayID 是否已赋值
                     * @return GatewayID 是否已赋值
                     * 
                     */
                    bool GatewayIDHasBeenSet() const;

                    /**
                     * 获取Service Source ID
                     * @return SourceID Service Source ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置Service Source ID
                     * @param _sourceID Service Source ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取Service Source Name
                     * @return SourceName Service Source Name
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Service Source Name
                     * @param _sourceName Service Source Name
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Service source type
                     * @return SourceType Service source type
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Service source type
                     * @param _sourceType Service source type
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Service source additional information
                     * @return SourceInfo Service source additional information
                     * 
                     */
                    SourceInfo GetSourceInfo() const;

                    /**
                     * 设置Service source additional information
                     * @param _sourceInfo Service source additional information
                     * 
                     */
                    void SetSourceInfo(const SourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayID;
                    bool m_gatewayIDHasBeenSet;

                    /**
                     * Service Source ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * Service Source Name
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Service source type
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Service source additional information
                     */
                    SourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVICESOURCEITEM_H_
